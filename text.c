




#include <stdio.h>

//
//ָ���������������ŵ�ַ
//int main()
//{
//	int a = 10;//4���ֽ�
//	//&a  &ȡ��ַ
//	int* p = &a;
//	//printf("%p\n", &a);
//	//printf("%p\n", p);
//	*p = 20;//*_�����ò�����
//	printf("a = %d\n", a);
//	//printf("p = %d\n", p);
//
//	return 0;
//}
//#define�����
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
//#define�����ʶ������
//#define MAX 100
//int main()
//{
//	int a = MAX;
//	printf("a = %d\n", a);
//	return 0;
//}

////static���ξֲ�����
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
//typedef -���Ͷ���-�����ض���
//int main()
//{
//	typedef unsigned int u_int;
//	u_int a = 20;
//	printf("%d\n", a);
//	return 0;
//}

//����������
//int main()
//{
//	int a = 20;
//	int b = 21;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}

//�ú����ȽϽϴ�ֵ
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
//	printf("�ϴ�ֵ�ǣ� %d\n", max);
//	return 0;
//}


//����ϴ�ֵ
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d��%d", &num1, &num2);              //%d����Ҫ\n������%d֮����ʲô���ӣ����ʱҪ��ͬ
//	if (num1 > num2)
//		printf("�ϴ�ֵ�ǣ� %d\n", num1);
//	else
//		printf("�ϴ�ֵ�ǣ� %d\n", num2);
//	return 0;
//}