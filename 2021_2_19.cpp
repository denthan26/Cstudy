//#include <stdio.h>
////#include <string.h>
//#define ROW 11
//#define COL 11
//int main()
//{
//	int i, j;
//	char arr[ROW][COL];
//	int k = COL / 2;
//	for (i = 0; i < ROW; i++)
//	{
//		//for (j = 0; j < 7; j++)
//		//{
//		if (i <= k)
//		{
//			for (j = 0; j < (k - i); j++)
//			{
//				printf(" ");
//			}
//			for (j = k - i; j <= k + i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//			//if (strcmp(arr[i][3]) == ' ')
//			//{
//				/*arr[i][3] = '*';
//				if (i > 0)
//				{
//					arr[i][3 + j] = '*';
//					arr[i][3 - j] = '*';
//				}*/
//				//if (i > 0)
//				//{
//				//	arr[i][COL / 2 + 1 - i] = '*';
//				//	arr[i][COL / 2 + 1 + i] = '*';
//				//	//(*p)[COL]
//				//}
//			//}
//		}
//		else
//		{
//			for (j = 0; j < i - k; j++)
//			{
//				printf(" ");
//			}
//			for (j = i - k; j <= k*k+(2-k)*i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		//}
//
//	}
//	return 0;
//}
////有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。
//#include <stdio.h>
//int main()
//{
//	int i,j;//m分子，n分母
//	float sum = 0,now, m, n;//sum最后答案，now当前分子的数
//	n = 1;
//	m = 2;
//	for (i = 0; i < 20; i++)
//	{
//		//j=m;
//		//m=m+n
//		//m=j
//		now = m / n;
//		sum += now;
//		j = m;
//		m = m + n;
//		n = j;
//	}
//	printf("%9.6f\n", sum);
//	return 0;
//}
//t = a;
//a = a + b;
//b = t;

//有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。
//问第4个人岁数，他说比第3个人大2岁。
//问第三个人，又说比第2人大两岁。
//问第2个人，说比第一个人大两岁。
//最后问第一个人，他说是10岁。
//请问第五个人多大？
//#include <iostream>
//int main()
//{
//	std::cout << "Enter two numbers:" << std::endl;
//	int v1, v2;
//	std::cin >> v1 >> v2;
//	std::cout << "The sum of " << v1;
//	          << " and " << v2;
//			  << " is " << v1 + v2;
//			  << std::endl;
//	/*std::cout << "The sum of" << v1 << " and " << v2 
//		  << " is " << v1 + v2 << std::endl;*/
//
//	return 0;
//}
//#include <iostream>
//int main()
//{
//	std::cout << "Hello,world!!!" << std::endl;
//	return 0;
//}
//#include <iostream>
//int main()
//{
//	int sum = 0, val = 1;
//	while (val <= 10)
//	{
//		sum += val;
//		val++;
//	}
//	std::cout << "1+2+3+4+5+6+7+8+9+10=";
//	std::cout << sum << std::endl;
//	return 0;
//}
//#include <iostream>
//int main()
//{
//	int a, b, up, low;
//	std::cout << "请输入两个值：>";
//	std::cin >> a >> b;
//	if (a > b)
//	{
//		up = a;
//		low = b;
//	}
//	else
//	{
//		up = b;
//		low = a;
//	}
//	int sum = 0;
//	for (int i = low; i <= up; ++i)
//	{
//		sum += i;
//	}
//	std::cout << "这两个值有小到大之后之间的和是" << sum << std::endl;
//	return 0;
//}
#include <iostream>
int main()
{
	
	int sum = 0, value;
	//std::cout << "请输入你要求和的数";
	while (std::cin >> value)
	{
		sum += value;
	}
	std::cout << "这些数的和是 " << sum << std::endl;
	return 0;
}









































