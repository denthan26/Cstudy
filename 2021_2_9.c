//2021/2/9  ����
////1������ĳ��ĳ��ĳ�£��ж���һ������һ��ĵڼ���
//#include <stdio.h>
//int main()
//{
//	int year, month, day,days;
//	//���µ��ж����죬2�����29��
//	//�����ǲ������꣬2�·ݵ������ǶԵģ�
//	printf("�����������գ�>");//2015,10,1    274
//	scanf("%d,%d,%d", &year, &month, &day);
//	int month1, month2, month3, month4, month5, month6, month7, month8, month9,month10, month11;
//	month1 = 31;
//	month2 = 60;
//	month3 = 91;
//	month4 = 121;
//	month5 = 152;
//	month6 = 182;
//	month7 = 213;
//	month8 = 244;
//	month9 = 274;
//	month10 = 305;
//	month11 = 335;
//	switch (month)
//	{
//	case 1:
//		days = day;
//		break;
//	case 2:
//		days = month1 + day;
//		break;
//	case 3:
//		days = month2 + day;
//		break;
//	case 4:
//		days = month3 + day;
//		break;
//	case 5:
//		days = month4 + day;
//		break;
//	case 6:
//		days = month5 + day;
//		break;
//	case 7:
//		days = month8 + day;
//		break;
//	case 8:
//		days = month7 + day;
//		break;
//	case 9:
//		days = month8 + day;
//		break;
//	case 10:
//		days = month9 + day;
//		break;
//	case 11:
//		days = month10 + day;
//		break;
//	case 12:
//		days = month11 + day;
//		break;
//	default:
//		break;
//	}
//	//�ж��Ƿ�������,����2�¶�һ��
//	if (year % 400 == 0)
//	{
//		//������
//		printf("%d\n", days);
//
//	}
//	else
//	{
//		//��������
//		days = days - 1;
//		printf("%d\n", days);
//	}
//	return 0;
//}
//�Ƚ��������Ĵ�С
#include <stdio.h>
int text(int x, int y, int z)
{
	if (x - y == 0 || x - z == 0 || y - z == 0)
	{
		if (x == y)
		{
			if (x > z)
				return x;
			else
				return z;
		}
		else if (x == z)
		{
			if (x > y)
				return z;
			else
				return y;
		}
		else
		{
			if (z > x)
				return z;
			else
				return x;
		}
	}
	else
	{
		if (x > y && z > z)
			return x;
		else if (y > x && y > z)
			return y;
		else
			return z;
	}

}
int main()
{
	int x, y, z;
	x = 20;
	y = 66;
	z = 66;
	printf("�������������ֵ��%d\n", text(x,y,z));
	return 0;
}





















