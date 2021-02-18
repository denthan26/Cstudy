//2021/2/18   （＞人＜；）

////猴子吃桃
//#include <stdio.h>
//int main()
//{
//	//从最后一天往前算
//	int day, i, x, q;
//	//day = 9;
//	x = 1;
//	for (i = 9; i > 0; i--)
//	{
//		q = (x + 1) * 2;
//		x = q;
//	}
//	printf("%d\n", q);
//	//int a,s,c;//第一天总共摘得桃,剩下的桃,吃的桃
//	//int i = 0;
//	//int t = a;
//	//for (i = 0; i < 9; i++)
//	//{
//	//	c = a / 2 + 1;
//	//	s = a - c;
//	//	a = a - c;
//	//}
//	//s = 1;
//	//printf("%d\n", a);
//	return 0;
//}

//两个乒乓球队进行比赛，各出三人。甲队为a, b, c三人，乙队为x, y, z三人。已抽签决定比赛名单。
//有人向队员打听比赛的名单。a说他不和x比，c说他不和x, z比，请编程序找出三队赛手的名单。
//#include <stdio.h>
//int main()
//{
//	char jia[3] = { 'a','b','c' };
//	char yi[3] = { 'x','y','z' };
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char i, j, k;
//    for (i = 'x'; i <= 'z'; i++) 
//    {
//        for (j = 'x'; j <= 'z'; j++) 
//        {
//            
//            
//                for (k = 'x'; k <= 'z'; k++) 
//                {
//                    if (i != k && j != k && i != j)//i=x;j=y;k=z 
//                    {
//                        if (i != 'x' && k != 'x' && k != 'z') 
//                        {//\t 的意思是 ：水平制表符。将当前位置移到下一个tab位置。
//                            printf("顺序为：a--%c\tb--%c\tc--%c\n", i, j, k);
//                        }
//                    }
//                }
//            
//        }
//    }
//}
//#include <stdlib.h>

//int main()
//{
//    char i, j, k;
//    for (i = 'x'; i <= 'z'; i++) 
//    {
//        for (j = 'x'; j <= 'z'; j++) 
//        {
//            if (i != j)//i=x,j=y 
//            {
//                for (k = 'x'; k <= 'z'; k++) 
//                {
//                    if (i != k && j != k)//i=x;j=y;k=z 
//                    {
//                        if (i != 'x' && k != 'x' && k != 'z') 
//                        {
//                            printf("顺序为：a--%c\tb--%c\tc--%c\n", i, j, k);
//                        }
//                    }
//                }
//            }
//        }
//    }
//}
//打印如下图案
//   *        1 
//  ***       3  
// *****      5
//*******     7
// *****
//  ***
//   *
#include <stdio.h>
#include <string.h>
//#define ROW 7;
//#define COL 7;
int main()
{
	int i, j;
	char arr[7][7];
	for (i = 0; i < 7; i++)
	{
		//for (j = 0; j < 7; j++)
		//{
			if (i <= 3)
			{
				for (j = 0; j < (3-i); j++)
				{
					printf(" ");
				}
				for (j = 3 - i; j <= 3 + i; j++)
				{
					printf("*");
				}
				printf("\n");
				//if (strcmp(arr[i][3]) == ' ')
				//{
					/*arr[i][3] = '*';
					if (i > 0)
					{
						arr[i][3 + j] = '*';
						arr[i][3 - j] = '*';
					}*/
					//if (i > 0)
					//{
					//	arr[i][COL / 2 + 1 - i] = '*';
					//	arr[i][COL / 2 + 1 + i] = '*';
					//	//(*p)[COL]
					//}
				//}
			}
			else
			{
				for (j = 0; j < i - 3; j++)
				{
					printf(" ");
				}
				for (j = i - 3; j <= 9 - i; j++)
				{
					printf("*");
				}
				printf("\n");
			}
		//}

	}
	return 0;
}


//#include <stdio.h>
//int main()
//{
//    int i, j, k;
//    for (i = 0; i <= 3; i++) 
//    {
//        for (j = 0; j <= 2 - i; j++)//   *
//        {                           //  ***
//            printf(" ");
//        }
//        for (k = 0; k <= 2 * i; k++) 
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    for (i = 0; i <= 2; i++) 
//    {
//        for (j = 0; j <= i; j++) 
//        {
//            printf(" ");
//        }
//        for (k = 0; k <= 4 - 2 * i; k++) 
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//}














