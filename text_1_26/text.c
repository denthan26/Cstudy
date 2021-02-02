#include <stdio.h>

//在有序的数组arr中找到7
int main()
{
	int i = 0;
	int arr[] = {1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("你找到了，真棒！\n");
			break;
		}
	}
	if (i == sz)
		printf("真遗憾！\n");
	return 0;
}
//计算1！+2！+3！
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int ret = 1;
//	for (i = 1; i <= 3; i++)
//	{
//		
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//计算n的阶乘
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= 4; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//while中的continue
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//		if (i == 5)
//			continue;
//	}
//	return 0;
//}

//while中break的用法
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//普通while循环
//int main()
//{
//	int i = 0;
//	while (i = 1)
//		printf("hehe\n");
//	return 0;
//}

//switch嵌套
//int main()
//{
//	int n = 1;//1 2 3
//	int m = 2;//2 3 4
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:m++;
//		case 2:n++;
//		default:
//			break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}





