//利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。
//#include <stdio.h>
//int main()
//{
//	int input;
//	char grade;
//	printf("请输入你的分数：>");
//	scanf("%d", &input);
//	grade = (input >= 90) ? 'A' : ((input >= 60 && input <= 89) ? 'B' : 'C');
//	printf("你的等级是%c\n", grade);
//	return 0;
//}

//输入两个正整数m和n，求其最大公约数和最小公倍数。
//#include <stdio.h>
//int main()
//{
//	int a, b, t, n, r;
//	a = 12;
//	b = 26;
//	if (a < b)//将ab的值对调，使a>b
//	{
//		t = b;
//		b = a;
//		a = t;
//	}
//	r = a % b;
//	n = a * b;//最大公倍数=(a*b)/最大公约数
//	while(r)
//	{
//		a = b;
//		b = r;
//		r = a % b;
//	} 
//	printf("最大公约数%d 最大公倍数%d", b, n / b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a, b, t, r, n;
//	printf("请输入两个数字：\n");
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
//	printf("这两个数的最大公约数是%d，最小公倍数是%d\n", b, n / b);
//
//	return 0;
//}

//输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
#include <stdio.h>
int main()
{
	char a;//用来存放输入的字符
	printf("请输入一些字符：>");
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
	printf("英文字母有%d个 空格有%d个 数字有%d个 其他有%d个", letter, space, digit, other);
	return 0;
}
//#include<stdio.h>
//int main()
//{
//    char c;
//    int letters = 0, spaces = 0, digits = 0, others = 0;
//    printf("请输入一些字母：\n");
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
//    printf("字母=%d,数字=%d,空格=%d,其他=%d\n", letters, digits, spaces, others);
//    return 0;
//}



