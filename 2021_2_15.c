////求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。
//#include <stdio.h>
//int main()
//{
//	int a, n, m;//2  5
//	int t = 0;
//	int i = 0;
//	int k = 0;
//	int arr[10] = { 0 };
//	printf("请输入两个数：>");
//	scanf("%d %d", &a, &n);
//	if (n == 1)
//	{
//		printf("%d\n", a);
//	}
//	else//a=2  n=2   a+aa
//	{
//		t = a;
//		k = a;
//		for (m = 0; m < n-1; m++)
//		{
//			//   2       22      222
//			a = a * 10;//   20      200     2000
//			t = a + t;//    20 + 2  200+22  2000+222
//			arr[m] = t;
//			i  = i + arr[m];
//		}
//		printf("%d\n", i+k);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int s = 0, a, n, t;
//	printf("请输入 a 和 n：\n");
//	scanf("%d%d", &a, &n);
//	t = a;
//	while (n > 0)
//	{
//		s += t;
//		a = a * 10;
//		t += a;
//		n--;
//	}
//	printf("a+aa+...=%d\n", s);
//	return 0;
//}
//一个数如果恰好等于它的因子之和，这个数就称为"完数"。例如6 = 1＋2＋3.编程找出1000以内的所有完数。
#include <stdio.h>
int AndSeveral(int i);


int AndSeveral(int i)
{
	int a = 0;
	for (a = 2; a < i; a++)
	{
		if (i % a == 0)
		{
			return i;
			break;
		}
		
	}
	return 1;
}
int main()
{
	int i, ret, k;
	int and [1000] = { 0 };
	k = 0;
	for (i = 2; i <= 1000; i++)
	{
		//找出所有合数
		ret = AndSeveral(i);
		if (ret != 1)//=1表示一个合数也没有
		{
			and[k] = ret;
			//printf("%d\n", and[k]);
			k++;
		}
		PerfectNum();//传一个合数，将它所有的因子都找出来相加，将和数返回
		//将返回的和数与传上去的合数对比，相同打印，不同跳过
		//循环k-1次
	}
	return 0;
}


















