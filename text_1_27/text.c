
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
//韩信点兵
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入三个数a<3,b<s,c<7:>");
//	
//	for ( i = 10; i <=100; i++)
//	{
//		scanf("%d%d%d", &a, &b, &c);
//		if (i % 3 == a && i % 5 == b && i % 7 == c)
//		{
//			printf("士兵共有%d人\n", i);
//			break;
//		}
//	}
//	if (i>100)
//	{
//		printf("请输入规定范围内abc的值\n");
//	}
//	return 0;
//}
//模拟用户登入
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：> ");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("密码真确\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入\n");
//		}
//	}
//	if (i == 3)
//		printf("请稍后再试\n");
//	return 0;
//}
//从左右两边向中间输出
//welcome to hutang!!!
//####################
//int main()
//{
//	char arr1[] = "welcome to hutang!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		/*printf("%s\n", arr2);*/
//		left++;
//		right--;
//		Sleep(1000);
//		system("cls");
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//用二分法在有序的数组中找到7
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//定义数组
//	int k = 7;//要找的数
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (k > arr[mid])
//		{
//			left = left + 1;
//		}
//		else if (k < arr[mid])
//		{
//			right = right - 1;
//		}
//		else
//		{
//			printf("找到了，下标是 %d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("没有");
//	}
//	return 0;
//}