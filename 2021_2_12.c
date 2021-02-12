//2021/2/12  (●ˇ∀ˇ●)

//将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。
#include <stdio.h>
void decomposition(int i, int arr)
{
	int j = 0;
	for (j = 2; j < i; j++)
	{
		if (i % j == 0)
		{

		}
	}
}
int main()
{
	int i = 90;
	int arr[] = { 0 };
	decomposition(i,arr);
	return 0;
}
//"水仙花数"
//100-200
//#include <stdio.h>
//void flowers(int i, int count, int ret)
//{
//	int k = 0;
//	int re = ret;
//	if (i > 9)
//	{
//		int j = 0;
//		j = i % 10;
//		i = i / 10;
//		count = count + j* j* j;
//		flowers(i,count,ret);
//	}
//	else
//	{
//		count = count + i * i * i;
//		if (count == re)
//		{
//			//是水仙数，输出
//			printf("%d ", re);
//		}
//
//	}
//}
int main()
{
	int ret = 0;
	int count = 0;
	int i = 0;
	//int j = 0;
	for (i = 100; i <= 1000; i++)
	{
		ret = i;
		flowers(i,count,ret);
	}
	return 0;
}
//判断101到200之间的素数。
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i,j;
//	for (i = 101; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//		}
//	}
//}
//兔子生崽
//#include <stdio.h>
//int main()
//{
//	int f1, f2, i;
//	f1 = 1;
//	f2 = 1;
//	for (i = 1; i <= 20; i++)
//	{
//		printf("%12d%12d", f1, f2);
//		if (i % 2 == 0)
//		{
//			printf("\n");
//		}
//		else
//		{
//			f1 = f1 + f2;
//			f2 = f1 + f2;
//		}
//
//	}
//	return 0;
//}
//国际象棋棋盘由64个黑白相间的格子组成，分为8行*8列。用i控制行，j来控制列，根据i+j的和的变化来控制输出黑方格，还是白方格。
//#include <stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 0; i < 8; i++)
//	{
//		for (j = 0; j < 8; j++)
//		{
//			if ((i + j) % 2 == 0)
//			{
//				printf("%s", "▄");
//			}
//			else
//			{
//				printf("  ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//99乘法表
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for ( i = 1; i <= 9 ; i++)
//	{
//		int j = 0;
//		for ( j = 1; j <= i ; j++)
//		{
//			int z = i * j;
//			printf("%d*%d=%-3d", i, j, z);//-3d,左对齐，占3位
//		}
//		printf("\n");
//	}
//	return 0;
//}