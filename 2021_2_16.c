//һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"������6 = 1��2��3.����ҳ�1000���ڵ�����������
#include <stdio.h>
int AndSeveral(int i);
int PerfectNum(int i);


int PerfectNum(int i)
{
	int a, n, b;
	int pn[1000] = { 0 };
	int k = 0;
	for (a = 2; a < i; a++)
	{
		if (i % a == 0)
		{
			pn[k] = a;//6 = 1 + 2 + 3  pn0=2;pn1=3
			k++;//n��Ԫ��n<k
		}
		b = 0;
		for (n = 0; n < k; n++)
		{
			b += pn[n];//2

		}
		if (a == i)
			return 1;
		return b + 1;

	}
}
int AndSeveral(int i)
{
	int a = 0;
	for (a = 2; a < i; a++)
	{
		if (i % a == 0)
		{
			return i;
			break;
		}

	}
	return 1;
}
int main()
{
	int i, ret, k, a, b, c;
	int and [1000] = { 0 };
	k = 0;
	for (i = 2; i <= 1000; i++)
	{
		//�ҳ����к���
		ret = AndSeveral(i);
		if (ret != 1)//=1��ʾһ������Ҳû��
		{
			and [k] = ret;
			//printf("%d\n", and[k]);
			if (i < 1000)
				k++;
		}
		//ѭ����and[]ÿһ��Ԫ�����δ���������
		for (a = 0; a <= k; a++)
		{
			b = and[a];
			c = PerfectNum(b);
			if (c == and[a])
			{
				printf("%d ", and[a]);
			}
		}
		//PerfectNum();//��һ���������������е����Ӷ��ҳ�����ӣ�����������
		//�����صĺ����봫��ȥ�ĺ����Աȣ���ͬ��ӡ����ͬ����
		//ѭ��k��
	}
	return 0;
}










