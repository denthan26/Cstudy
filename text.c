




#include <stdio.h>

//
//指针变量——用来存放地址
//int main()
//{
//	int a = 10;//4个字节
//	//&a  &取地址
//	int* p = &a;
//	//printf("%p\n", &a);
//	//printf("%p\n", p);
//	*p = 20;//*_解引用操作符
//	printf("a = %d\n", a);
//	//printf("p = %d\n", p);
//
//	return 0;
//}
//#define定义宏
//#define MAX(X,Y) (X>Y?X:Y)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max= %d\n", max);
//	return 0;
//}
//#define定义标识符常量
//#define MAX 100
//int main()
//{
//	int a = MAX;
//	printf("a = %d\n", a);
//	return 0;
//}

////static修饰局部变量
//void text()
//{
//	static int a = 1;
//	a++;
//	printf("a= %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		text();
//		i++;	
//	}
//
//	return 0;
//}
//typedef -类型定义-类型重定义
//int main()
//{
//	typedef unsigned int u_int;
//	u_int a = 20;
//	printf("%d\n", a);
//	return 0;
//}

//条件操作符
//int main()
//{
//	int a = 20;
//	int b = 21;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}

//用函数比较较大值
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = Max(a, b);
//	printf("较大值是： %d\n", max);
//	return 0;
//}


//输出较大值
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d，%d", &num1, &num2);              //%d后不需要\n，两个%d之间用什么链接，输出时要相同
//	if (num1 > num2)
//		printf("较大值是： %d\n", num1);
//	else
//		printf("较大值是： %d\n", num2);
//	return 0;
//}