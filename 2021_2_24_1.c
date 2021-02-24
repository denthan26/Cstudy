//内存越界
#include <stdio.h>
#include <string.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	char b[] = "abcdef";
	//int sz1 = sizeof(a) / sizeof(a[0]);
	int sz2 = sizeof(b) / sizeof(b[0]);
	int len = strlen("abcdef");
	printf("%d %d\n", sz2, len);
	//printf("%d\n", sz);
	return 0;
}
//#include <stdio.h>
////void characterdel(char* old, char* del);
//void characterdel2(char arr[10], char del[3]);
//
//
//void characterdel2(char arr[10], char del[3])
//{
//	int i, j;
//	for (j = 0; j < 3; j++)
//	{
//		for (i = 0; i < 10; i++)
//		{
//			if (arr[i] == del[j])
//			{
//				arr[i] = ' ';
//			}
//		}
//	}
//	printf("%s\n", arr);
//}
//使用指针，下一条函数不用strcmp试试
//void characterdel(char* old, char* del)
//{
//	int i, j;
//	for (j = 0; j < 3; j++)
//	{
//		for (i = 0; i < 10; i++)
//		{
//			if (*(old + i) == *(del + j))
//			{
//				*(old + i) = ' ';
//			}
//		}
//	}
//	printf("%s\n", old);
//}

//int main()
//{
//	char arr[10] = { 0 };
//	char del[3] = { 0 };
//	int c;
//	printf("请输入最大长度为9的字符串：>");
//	scanf("%s", &arr);
//	while ((c = getchar()) != EOF && c != '\n');
//	printf("请输入你要删除的字符：>");
//	scanf("%s", &del);
//	//characterdel(arr, del);
//	characterdel2(arr, del);
//	return 0;
//}

//www.runoob.com
//#include <stdio.h>
//void reverse(char* s)//传的是一个字符的地址，用字符指针
//{
//	//计算字符串的长度
//	int len = 0;
//	char* p = s;
//	while (*p != 0)
//	{
//		len++;
//		p++;
//	}
//	//交换
//	//交换次数-第一个变成最后一个，第二个变成最后第二个
//	int i = 0;
//	char c;
//	while (i < len / 2 - 1)
//	{
//		c = *(s + i);//将第i个字符赋值给c
//		*(s + i) = *(s + len - 1 - i);//将第i个字符变成与之相对应的最后那个字符
//		*(s + len - 1 - i) = c;
//		i++;
//	}
//	printf("%s\n", s);
//}
//int main()
//{
//	char s[] = "www.runoob.com";
//	printf("www.runoob.com =>  ");
//	reverse(s);
//	printf("%s\n", s);
//	return 0;
//}
//void reverse(char* s)
//{
//	// 获取字符串长度
//	int len = 0;
//	char* p = s;
//	while (*p != 0)
//	{
//		len++;
//		p++;
//	}
//
//	// 交换 ...
//	int i = 0;
//	char c;
//	while (i <= len / 2 - 1)
//	{
//		c = *(s + i);
//		*(s + i) = *(s + len - 1 - i);
//		*(s + len - 1 - i) = c;
//		i++;
//	}
//}
