#include <stdio.h>
#include <string.h>

//�Զ��庯��
//numÿ�μ�һ
//void sum(int* x)
//{
//	(*x)++;
//}
//int main()
//{
//	int num = 0;
//	sum(&num);
//	printf("%d\n", num);
//	sum(&num);
//	printf("%d\n", num);
//	sum(&num);
//	printf("%d\n", num);
//	return 0;
//}

//100-000����Щ��������
//int is_prime_number(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int ret = is_prime_number(i);
//		if(ret==1)
//			printf("%d ", i);
//		
//
//	}
//	return 0;
//}

//a,bֵ����
//void exchange(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	exchange(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}

//����ϴ�ֵ
//int max(int x, int y)
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
//	int ret = max(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//�Զ���ӷ�
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret =Add(a, b);
//	printf("a+b=%d\n", ret);
//	return 0;
//}

//memset����
//int main()
//{
//	char arr[] = "hello";
//	memset(arr, '2', 2);
//	printf("%s\n", arr);
//	return 0;
//}

//strcpy����
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[] = "#############";
//	strcpy(arr2, arr1);//(Ŀ�꣬��ʼ��
//	printf("%s\n", arr2);
//	return 0;
//}

//һ���ӷ�����
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}