
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
//���ŵ��
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("������������a<3,b<s,c<7:>");
//	
//	for ( i = 10; i <=100; i++)
//	{
//		scanf("%d%d%d", &a, &b, &c);
//		if (i % 3 == a && i % 5 == b && i % 7 == c)
//		{
//			printf("ʿ������%d��\n", i);
//			break;
//		}
//	}
//	if (i>100)
//	{
//		printf("������涨��Χ��abc��ֵ\n");
//	}
//	return 0;
//}
//ģ���û�����
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺> ");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//	}
//	if (i == 3)
//		printf("���Ժ�����\n");
//	return 0;
//}
//�������������м����
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

//�ö��ַ���������������ҵ�7
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//��������
//	int k = 7;//Ҫ�ҵ���
//	int sz = sizeof(arr) / sizeof(arr[0]);//�������
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
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
//			printf("�ҵ��ˣ��±��� %d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("û��");
//	}
//	return 0;
//}