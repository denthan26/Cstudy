//���������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ��60�����µ���C��ʾ��
//#include <stdio.h>
//int main()
//{
//	int input;
//	char grade;
//	printf("��������ķ�����>");
//	scanf("%d", &input);
//	grade = (input >= 90) ? 'A' : ((input >= 60 && input <= 89) ? 'B' : 'C');
//	printf("��ĵȼ���%c\n", grade);
//	return 0;
//}

//��������������m��n���������Լ������С��������
//#include <stdio.h>
//int main()
//{
//	int a, b, t, n, r;
//	a = 12;
//	b = 26;
//	if (a < b)//��ab��ֵ�Ե���ʹa>b
//	{
//		t = b;
//		b = a;
//		a = t;
//	}
//	r = a % b;
//	n = a * b;//��󹫱���=(a*b)/���Լ��
//	while(r)
//	{
//		a = b;
//		b = r;
//		r = a % b;
//	} 
//	printf("���Լ��%d ��󹫱���%d", b, n / b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a, b, t, r, n;
//	printf("�������������֣�\n");
//	scanf("%d %d", &a, &b);
//	if (a < b)
//	{
//		t = b; b = a; a = t;
//	}
//	r = a % b;
//	n = a * b;
//	while (r != 0)
//	{
//		a = b;
//		b = r;
//		r = a % b;
//	}
//	printf("�������������Լ����%d����С��������%d\n", b, n / b);
//
//	return 0;
//}

//����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
#include <stdio.h>
int main()
{
	char a;//�������������ַ�
	printf("������һЩ�ַ���>");
	a = getchar();
	int letter = 0;
	int space = 0;
	int digit = 0;
	int other = 0;
	//scanf("%s", &a);
	while (a != '\n')
	{
		if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
			letter++;
		else if (a == ' ')
			space++;
		else if (a >= '0' && a <= '9')
			digit++;
		else
			other++;
	}
	printf("Ӣ����ĸ��%d�� �ո���%d�� ������%d�� ������%d��", letter, space, digit, other);
	return 0;
}
//#include<stdio.h>
//int main()
//{
//    char c;
//    int letters = 0, spaces = 0, digits = 0, others = 0;
//    printf("������һЩ��ĸ��\n");
//    while ((c = getchar()) != '\n')
//    {
//        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
//            letters++;
//        else if (c >= '0' && c <= '9')
//            digits++;
//        else if (c == ' ')
//            spaces++;
//        else
//            others++;
//    }
//    printf("��ĸ=%d,����=%d,�ո�=%d,����=%d\n", letters, digits, spaces, others);
//    return 0;
//}



