//C����ʵ�ֽ���д��ĸA�����ΪСд��ĸa
//#include <stdio.h>
//int main()
//{
//	char character_big, character_small;
//	character_big = 'A';
//	character_small = character_big +32;
//	printf("%c\n", character_small);
//	return 0;
//}
//��%f���Ʒ����6λС��
//#include<stdio.h>//ͷ�ļ�
//int main() //������
//{
//	double double_temp, temp;//����˫���ȸ����ͱ���
//	double_temp = 1.0;//��ʼ��double_temp
//	temp = double_temp / 3;//��double_temp����3�õ��ý����ֵ��temp
//	printf("%f\n", temp);//���temp
//	return 0;//��������ֵΪ0
//}
//��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ���
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
//				if (i != j && j != k && k != i)//Ҫ�ж�ijk�������Ƿ���ͬ
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
// 1  ����(I)���ڻ����10��Ԫʱ���������10%��
// 2  �������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10% ��ɣ�����10��Ԫ�Ĳ��֣������7.5 % ��
// 3  20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5 % ��
// 4  40��60��֮��ʱ����40��Ԫ�Ĳ��֣������3 % ��
// 5  60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5 % ��
// 6  ����100��Ԫʱ������100��Ԫ�Ĳ��ְ�1 % ��ɡ�
//#include <stdio.h>
//int main()
//{
//	double I = 0;
//	double bonus1, bonus2, bonus3, bonus4, bonus5, bonus6,bonus;
//	printf("���������ľ�����>");
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
//	printf("���Ľ�����%lf\n", bonus);
//	return 0;
//}
//һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�
//#include <stdio.h>
//#include <math.h>
//long text(long x, long y)
//{
//    long j,k;//����
//	j = sqrt(x);
//	k = sqrt(y);
//	//�ж�j*j�Ȳ�����x
//	if (j * j == x && k * k == y)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	long i = 0;
//	long m;//��һ��ƽ����
//	long n;//�ڶ���ƽ����
//	//ѭ��10000��
//	for (i = -101; i <= 10000; i++)
//	{
//		m = i + 100;
//		n = m + 168;
//		if (m >= 0 && n > 0)
//		{
//			//�ж�mn�Ƿ���Ա�����
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


















