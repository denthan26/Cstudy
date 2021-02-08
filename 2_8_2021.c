//C语言实现将大写字母A，输出为小写字母a
//#include <stdio.h>
//int main()
//{
//	char character_big, character_small;
//	character_big = 'A';
//	character_small = character_big +32;
//	printf("%c\n", character_small);
//	return 0;
//}
//用%f控制符输出6位小数
//#include<stdio.h>//头文件
//int main() //主函数
//{
//	double double_temp, temp;//定义双精度浮点型变量
//	double_temp = 1.0;//初始化double_temp
//	temp = double_temp / 3;//将double_temp除以3得到得结果赋值给temp
//	printf("%f\n", temp);//输出temp
//	return 0;//函数返回值为0
//}
//有1，2，3，4个数字，能组成多少个互不相同且无重复数字的三位数，都是多少
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int count = 0;
//	for (i = 1; i < 5; i++)
//	{
//		for (j = 1; j < 5; j++)
//		{
//			for (k = 1; k < 5; k++)
//			{
//				if (i != j && j != k && k != i)//要判断ijk三个数是否相同
//				{
//					printf("%d,%d,%d\n", i, j, k);
//					count++;
//				}
//			}
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
// 1  利润(I)低于或等于10万元时，奖金可提10%；
// 2  利润高于10万元，低于20万元时，低于10万元的部分按10% 提成，高于10万元的部分，可提成7.5 % ；
// 3  20万到40万之间时，高于20万元的部分，可提成5 % ；
// 4  40万到60万之间时高于40万元的部分，可提成3 % ；
// 5  60万到100万之间时，高于60万元的部分，可提成1.5 % ；
// 6  高于100万元时，超过100万元的部分按1 % 提成。
//#include <stdio.h>
//int main()
//{
//	double I = 0;
//	double bonus1, bonus2, bonus3, bonus4, bonus5, bonus6,bonus;
//	printf("请输入您的净利润：>");
//	scanf("%lf", &I);
//	bonus1 = I * 0.1;
//	bonus2 = bonus1 + (I - 100000) * 0.075;
//	bonus3 = bonus2 + (I - 200000) * 0.05;
//	bonus4 = bonus3 + (I - 400000) * 0.03;
//	bonus5 = bonus4 + (I - 600000) * 0.015;
//	bonus6 = bonus5 + (I - 1000000) * 0.01;
//	if (I<=100000)
//	{
//		bonus = bonus1;
//	}
//	else if (I > 100000 && I <= 200000)
//	{
//		bonus = bonus2;
//	}
//	else if (I > 200000 && I <= 400000)
//	{
//		bonus = bonus3;
//	}
//	else if (I > 400000 && I <= 600000)
//	{
//		bonus = bonus4;
//	}
//	else if (I > 600000 && I <= 1000000)
//	{
//		bonus = bonus5;
//	}
//	else if (I > 1000000)
//	{
//		bonus = bonus6;
//	}
//	printf("您的奖金是%lf\n", bonus);
//	return 0;
//}
//一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
//#include <stdio.h>
//#include <math.h>
//long text(long x, long y)
//{
//    long j,k;//开方
//	j = sqrt(x);
//	k = sqrt(y);
//	//判断j*j等不等于x
//	if (j * j == x && k * k == y)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	long i = 0;
//	long m;//第一个平方数
//	long n;//第二个平方数
//	//循环10000次
//	for (i = -101; i <= 10000; i++)
//	{
//		m = i + 100;
//		n = m + 168;
//		if (m >= 0 && n > 0)
//		{
//			//判断mn是否可以被开方
//			if (text(m, n) == 1)
//			{
//				printf("%d\n", i);
//			}
//		}
//	}
//	return 0;
//}

#include <stdio.h>
int main(void)
{
	int i, j, m, n, x;
	for (i = 1; i < 168 / 2 + 1; i++)
	{
		if (168 % i == 0)
		{
			j = 168 / i;
			if (i > j && (i + j) % 2 == 0 && (i - j) % 2 == 0)
			{
				m = (i + j) / 2;
				n = (i - j) / 2;
				x = n * n - 100;
				printf("%d + 100 = %d * %d\n", x, n, n);
				printf("%d + 268 = %d * %d\n", x, m, m);
			}
		}
	}
	return 0;
}


















