////1.���������ĳɲ�һ����
////2.�����У�����
//////һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"������6 = 1��2��3.����ҳ�1000���ڵ�����������
//#include <stdio.h>
//int AndSeveral(int i);
//void PerfectNum(int i);
//
//
//void PerfectNum(int i)
//{
//	int x, n, y;
//	int pn[1000] = { 0 };
//	int k = 0;
//	for (x = 2; x < i; x++)//6
//	{
//		if (i % x == 0)//6%2==0
//		{
//			//i = i / x;//3
//			pn[k] = x;//6 = 1 + 2 + 3  pn0=2;pn1=3
//			k++;//n��Ԫ��n<k
//		}
//	}
//	n = 0;
//	for (y = 0; y < k; y++)
//	{
//		//printf("%d ", pn[y]);
//		n =  n + pn[y];
//	}
//	n = n + 1;
//	if (n == i)
//		printf("%d\n", i);
//	//printf("\n");
//	//y = 0;
//	//for (n = 0; n < k; n++)
//	//{
//	//	y = pn[n] + y;//2
//
//	//}
//	//if (x == i)
//	//	return 1;
//	//return y + 1;
//}
//int AndSeveral(int i)
//{
//	int a = 0;
//	for (a = 2; a < i; a++)
//	{
//		if (i % a == 0)
//		{
//			return i;
//			break;
//		}
//
//	}
//	return 1;
//}
//int main()
//{
//	int i, ret, k, a, b, c;
//	int and [1000] = { 0 };
//	k = 0;
//	for (i = 2; i <= 1000; i++)
//	{
//		//�ҳ����к���
//		ret = AndSeveral(i);
//		if (ret != 1)//=1��ʾһ������Ҳû��
//		{
//			and [k] = ret;
//			//printf("%d\n", and[k]);
//			if (i < 1000)
//				k++;
//		}
//		/*a = and [0];
//		b = and [1];
//		c = and [2];
//		printf("%d", a);
//		printf("%d", b);
//		printf("%d", c);*/
//		
//	}
//	//ѭ����and[]ÿһ��Ԫ�����δ���������
//	for (a = 0; a < k; a++)
//	{
//		b = and [a];
//		PerfectNum(b);
//		//printf("%d\n", b);
//		/*c = PerfectNum(b);
//		if (c == b)
//		{
//			printf("%d\n", b);
//		}*/
//	}
//		//PerfectNum();//��һ���������������е����Ӷ��ҳ�����ӣ�����������
//		//�����صĺ����봫��ȥ�ĺ����Աȣ���ͬ��ӡ����ͬ����
//		//ѭ��k��
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	printf("%d\n", a[0]);
//	printf("%d\n", a[1]);
//	printf("%d\n", a[2]);
//	printf("%d\n", a[3]);
//	printf("%d\n", a[4]);
//	return 0;
//}
////һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ��
//#include <stdio.h>
//int main()
//{
//	float s,h;
//	int i;
//	h = s = 100;
//	for (i = 1; i <= 10; i++)
//	{
//		h = h / 2;
//		//s = s + 3*h;
//		if(i<10)
//			s = s + 2 * h;
//	}
//	printf("%f %f", s, h);
//	return 0;
//}
//��10�����ʱ��������299.609375�ף���10�η�����0.097656��





//#include <stdio.h>
//int main()
//{
//	int y, x, c;
//	printf("��������Ʒ�ֽ�");
//	scanf("%d", &x);
//
//	printf("�������ֽ�");
//	scanf("%d", &y);
//
//	printf("������������");
//	scanf("%d", &c);
//
//	int change = (x - y) * c;
//	printf("%d\n", change);
//	return 0;
//}

#include <stdio.h>
#include <math.h>
int main()
{
	double x, s;
	printf("input:");
	scanf("%lf", &x);
	s = sin(x);
	printf("lf", s);
}













