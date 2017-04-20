////猜数字游戏
//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//
//void mune()
//{
//	printf("--------------1.play--------------\n");
//	printf("--------------0.exit--------------\n");
//}
//
//void GuessNum()
//{
//	int Rand = rand() % 100;
//	int num = 0;
//	while (1)
//	{
//		printf("请猜数字,范围0-99：");
//		scanf("%d", &num);
//		if (num >= 100 || num < 0)
//		{
//			printf("该数字不在范围内\n");
//		}
//		else if(num > Rand)
//		{
//			printf("你猜大了\n");
//		}
//		else if (num < Rand)
//		{
//			printf("你猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	mune();
//	int select = 0;
//	printf("请选择:");
//	scanf("%d", &select);
//	switch(select)
//	{
//		case 0:
//		{
//			printf("Bye Bye!");
//			exit(1);
//			break;
//		}
//		case 1:
//		{
//			GuessNum();
//		}
//	}
//	return 0;
//}


////二分查找
//#include<stdio.h>
//#include<assert.h>
//#pragma warning(disable:4996)
//
//
//////[)
//////int BinarySearch(int arr[], int left, int right, int num)         //非递归
//////{
//////	assert(arr);
//////	while (left < right)
//////	{
//////		int mid = left + (right - left) >> 1;
//////		if (num > arr[mid])
//////		{
//////			left = mid + 1;
//////		}
//////		else if (num < arr[mid])
//////		{
//////			right = mid;
//////		}
//////		else
//////		{
//////			return mid;
//////		}
//////	}
//////	return -1;
//////}
////int BinarySearch(int arr[], int left, int right, int num)         //递归
////{
////	if (left <= right)
////	{
////		int mid = left + (right - left) >> 1;
////		if (num > arr[mid])
////		{
////			return BinarySearch(arr, mid + 1, right, num);
////		}
////		else if (num < arr[mid])
////		{
////			return BinarySearch(arr, 0, mid - 1, num);
////		}
////		else
////		{
////			return mid;
////		}
////	}
////	else
////	{
////		return -1;
////	}
////}
//
////[]
////int BinarySearch(int arr[], int left, int right, int num)       //非递归
////{
////	while (left <= right)
////	{
////		int mid = left + ((right - left) >> 1);
////		if (num > arr[mid])
////		{
////			left = mid;
////		}
////		else if (num < arr[mid])
////		{
////			right = mid;
////		}
////		else
////		{
////			return mid;
////		}
////	}
////	return -1;
////}
//int BinarySearch(int arr[], int left, int right, int num)       //递归
//{
//	if (left <= right)
//	{
//		int mid = left + ((right - left) >> 1);
//		if (num > arr[mid])
//		{
//			return BinarySearch(arr, mid, right, num);
//		}
//		else if (num < arr[mid])
//		{
//			return BinarySearch(arr, left, mid, num);
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//int main()
//{
//	int arr[10];
//	//printf("请按照升序输入10个数字：");
//	//for (int i = 0; i < 10; ++i)
//	//{
//	//	scanf("%d", &arr[i]);
//	//}
//	for (int i = 0; i < 10; ++i)
//	{
//		arr[i] = i;
//	}
//	int num = 0;
//	printf("请输入需要查找的数字：");
//	scanf("%d", &num);
//	//int ret = BinarySearch(arr, 0, sizeof(arr)/sizeof(arr[0]), num);
//	int ret = BinarySearch(arr, 0, sizeof(arr)/sizeof(arr[0]) - 1, num);
//	if (ret >= 0)
//	{
//		printf("查找成功，下标为：%d\n", ret);
//	}
//	else
//	{
//		printf("查找失败！\n");
//	}
//	return 0;
//}


//杨辉三角
#include<stdio.h>
#include<malloc.h>
#pragma warning(disable:4996)

void YangHuiTriangle(int level)
{
	int** buf = (int*)malloc(sizeof(int*)*level);
	int i = 0;
	for (i = 0; i < level; i++) 
	{
		buf[i] = (int*)malloc(sizeof(int)*level);
	}

	int j = 0;
	for (i = 0; i < level && j < level; i++, j++) 
	{
		buf[i][0] = 1;
		buf[i][j] = 1;
	}

	for (i = 2; i < level; i++) 
	{
		for (j = 1; j < i; j++) 
		{
			buf[i][j] = buf[i - 1][j - 1] + buf[i - 1][j];
		}
	}

	for (i = 0; i < level; i++) 
	{
		int k = 0;
		for (; k < level - i; k++)
		{
			printf("%2c", ' ');
		}
		for (j = 0; j <= i; j++)
		{
			printf("%3d ", buf[i][j]);
		}
		printf("\n");
	}

	for (; i < level; i++) 
	{
		free(buf[i]);
	}
	free(buf);
}

int main()
{
	int level = 0;
	printf("请输入杨辉三角的层数：");
	scanf("%d", &level);
	YangHuiTriangle(level);
	return 0;
}