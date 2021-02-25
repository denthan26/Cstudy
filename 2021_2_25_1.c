//#include < stdio. h >
//main()
//{
//	char w[20], a[5][10] = { "abcdef", "ghijkl", "mnopq", "rstuv", "wxyz" };
//	int p[6][2] = { {0,1},{1,5},{0,0},{0,2},{1,4},{4,4} }, i;
//	for (i = 0; i < 6; i + +)
//		w[i] = a[p[i][0]][p[i][1]];
//	printf(w);
//}













//求一个3 * 3矩阵对角线元素之和
//#include <stdio.h>
//#define N 3
//int main()
//{
//	int i, j, arr[N][N], sum = 0, sum1=0;
//	
//	printf("请输入3*3矩形的各个数：>");
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			if(i==j)
//				sum += arr[i][j];
//		}
//	}
//	j = N;
//	sum1 = sum;
//	i = 0;
//	while (i < N)
//	{
//		sum1 += arr[i][j - 1];// 0 2;1 1;2 0
//		i++;
//		j = N - i;
//	}
//	sum1 = sum1 - arr[N / 2][N / 2];
//	printf("%d\n", sum1);
//	return 0;
//}


////对10个数进行排序
//#include <stdio.h>
//void big_small(int* p);
//void small_big(int* p);
//
//void big_small(int* p)
//{
//	int i, arr[10], j;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = *(p + i);
//	}
//	for (i = 0; i < 9; i++)
//	{
//		int bet = i;
//		int temp;
//		for (j = i + 1; j < 10; j++)
//		{
//			if (arr[bet] < arr[j])
//			{
//				bet = j;
//			}
//		}//arr[bet]最大
//		//把arr[bet]与arr[i]交换
//		temp = arr[i];
//		arr[i] = arr[bet];
//		arr[bet] = temp;
//	}
//	for (i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//}
//void small_big(int* p)
//{
//	int i, arr[10], j;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = *(p + i);
//	}
//	for (i = 0; i < 9; i++)
//	{
//		int bet = i;
//		int temp;
//		for (j = i + 1; j < 10; j++)
//		{
//			if (arr[bet] > arr[j])
//			{
//				bet = j;
//			}
//		}//arr[bet]最小
//		//把arr[bet]与arr[i]交换
//		temp = arr[i];
//		arr[i] = arr[bet];
//		arr[bet] = temp;
//	}
//	for (i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//}
//int main()
//{
//	int arr[10], i, cho;
//	printf("请输入10个需要排序的数");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &arr[i]);
//	printf("请选择降序还是升序:\n");
//	printf("1：降序  2：升序\n");
//	printf("请选择：>");
//	scanf("%d", &cho);//输入整型不需要清空缓冲区
//	//for (i = 0; i < 10; i++)
//		//printf("%d ", arr[i]);
//	//printf("%d", cho);
//	switch (cho)
//	{
//	case 1:
//		big_small(arr);
//		break;
//	case 2:
//		small_big(arr);
//		break;
//	default:
//		break;
//	}
//	return 0;
//}
