////��s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�
//#include <stdio.h>
//int main()
//{
//	int a, n, m;//2  5
//	int t = 0;
//	int i = 0;
//	int k = 0;
//	int arr[10] = { 0 };
//	printf("��������������>");
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
//	printf("������ a �� n��\n");
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
//һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"������6 = 1��2��3.����ҳ�1000���ڵ�����������
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
		//�ҳ����к���
		ret = AndSeveral(i);
		if (ret != 1)//=1��ʾһ������Ҳû��
		{
			and[k] = ret;
			//printf("%d\n", and[k]);
			k++;
		}
		PerfectNum();//��һ���������������е����Ӷ��ҳ�����ӣ�����������
		//�����صĺ����봫��ȥ�ĺ����Աȣ���ͬ��ӡ����ͬ����
		//ѭ��k-1��
	}
	return 0;
}


















