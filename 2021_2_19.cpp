//#include <stdio.h>
////#include <string.h>
//#define ROW 11
//#define COL 11
//int main()
//{
//	int i, j;
//	char arr[ROW][COL];
//	int k = COL / 2;
//	for (i = 0; i < ROW; i++)
//	{
//		//for (j = 0; j < 7; j++)
//		//{
//		if (i <= k)
//		{
//			for (j = 0; j < (k - i); j++)
//			{
//				printf(" ");
//			}
//			for (j = k - i; j <= k + i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//			//if (strcmp(arr[i][3]) == ' ')
//			//{
//				/*arr[i][3] = '*';
//				if (i > 0)
//				{
//					arr[i][3 + j] = '*';
//					arr[i][3 - j] = '*';
//				}*/
//				//if (i > 0)
//				//{
//				//	arr[i][COL / 2 + 1 - i] = '*';
//				//	arr[i][COL / 2 + 1 + i] = '*';
//				//	//(*p)[COL]
//				//}
//			//}
//		}
//		else
//		{
//			for (j = 0; j < i - k; j++)
//			{
//				printf(" ");
//			}
//			for (j = i - k; j <= k*k+(2-k)*i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		//}
//
//	}
//	return 0;
//}
////��һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰ20��֮�͡�
//#include <stdio.h>
//int main()
//{
//	int i,j;//m���ӣ�n��ĸ
//	float sum = 0,now, m, n;//sum���𰸣�now��ǰ���ӵ���
//	n = 1;
//	m = 2;
//	for (i = 0; i < 20; i++)
//	{
//		//j=m;
//		//m=m+n
//		//m=j
//		now = m / n;
//		sum += now;
//		j = m;
//		m = m + n;
//		n = j;
//	}
//	printf("%9.6f\n", sum);
//	return 0;
//}
//t = a;
//a = a + b;
//b = t;

//��5��������һ���ʵ�����˶����ꣿ��˵�ȵ�4���˴�2�ꡣ
//�ʵ�4������������˵�ȵ�3���˴�2�ꡣ
//�ʵ������ˣ���˵�ȵ�2�˴����ꡣ
//�ʵ�2���ˣ�˵�ȵ�һ���˴����ꡣ
//����ʵ�һ���ˣ���˵��10�ꡣ
//���ʵ�����˶��
//#include <iostream>
//int main()
//{
//	std::cout << "Enter two numbers:" << std::endl;
//	int v1, v2;
//	std::cin >> v1 >> v2;
//	std::cout << "The sum of " << v1;
//	          << " and " << v2;
//			  << " is " << v1 + v2;
//			  << std::endl;
//	/*std::cout << "The sum of" << v1 << " and " << v2 
//		  << " is " << v1 + v2 << std::endl;*/
//
//	return 0;
//}
//#include <iostream>
//int main()
//{
//	std::cout << "Hello,world!!!" << std::endl;
//	return 0;
//}
//#include <iostream>
//int main()
//{
//	int sum = 0, val = 1;
//	while (val <= 10)
//	{
//		sum += val;
//		val++;
//	}
//	std::cout << "1+2+3+4+5+6+7+8+9+10=";
//	std::cout << sum << std::endl;
//	return 0;
//}
//#include <iostream>
//int main()
//{
//	int a, b, up, low;
//	std::cout << "����������ֵ��>";
//	std::cin >> a >> b;
//	if (a > b)
//	{
//		up = a;
//		low = b;
//	}
//	else
//	{
//		up = b;
//		low = a;
//	}
//	int sum = 0;
//	for (int i = low; i <= up; ++i)
//	{
//		sum += i;
//	}
//	std::cout << "������ֵ��С����֮��֮��ĺ���" << sum << std::endl;
//	return 0;
//}
#include <iostream>
int main()
{
	
	int sum = 0, value;
	//std::cout << "��������Ҫ��͵���";
	while (std::cin >> value)
	{
		sum += value;
	}
	std::cout << "��Щ���ĺ��� " << sum << std::endl;
	return 0;
}









































