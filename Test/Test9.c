////实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//#include<stdio.h>
//#pragma warning(disable:4996)
//
//void PrintMulTable(int row)
//{
//	for (int i = 1; i <= row; ++i)
//	{
//		for (int j = 1; j <= i; ++j)
//		{
//			printf("%2d X %2d = %2d\t", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int row = 0;
//	printf("请输入行数：");
//	scanf("%d", &row);
//	PrintMulTable(row);
//	return 0;
//}


////使用函数实现两个数的交换。
//#include<stdio.h>
//
////void Swap(int* a, int* b)
////{
////	int tmp = *a;
////	*a = *b;
////	*b = tmp;
////}
////void Swap(int* a, int* b)
////{
////	*a = *a - *b;
////	*b = *a + *b;
////	*a = *b - *a;
////}
//void Swap(int* a, int* b)
//{
//	*a = *a ^ *b;
//	*b = *a ^ *b;
//	*a = *a ^ *b;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("Before: a:%d, b:%d\n", a, b);
//	Swap(&a, &b);
//	printf("After: a:%d, b:%d\n", a, b);
//	return 0;
//}


////实现一个函数判断year是不是闰年。
//#include<stdio.h>
//#pragma warning(disable:4996)
//
//int LeapYear(int year)
//{
//	if (((year % 4 == 0) && (year % 100 != 0)) || ((year % 400) == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	printf("Please enter a year:");
//	int year = 0;
//	scanf("%d", &year);
//	int ret = LeapYear(year);
//	if (ret == 1)
//	{
//		printf("This is a leap year\n");
//	}
//	else
//	{
//		printf("This is not a leap year\n");
//
//	}
//	return 0;
//}


////创建一个数组，实现函数init（）初始化数组、实现empty（）清空数组、实现reverse（）函数完成数组元素的逆置。
//#include<stdio.h>
//
//void Init(int arr[], int size)
//{
//	for (int i = 0; i < size; ++i)
//	{
//		arr[i] = i;
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int size)
//{
//	int left = 0;
//	int right = size - 1;
//	while (left <= right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		++left;
//		--right;
//	}
//	for (int i = 0; i < size; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Empty(int arr[], int size)
//{
//	for (int i = 0; i < size; ++i)
//	{
//		arr[i] = 0;
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10];
//	int size = sizeof(arr) / sizeof(arr[0]);
//	printf("初始化数组：");
//	Init(arr, size);
//	printf("逆置数组：");
//	Reverse(arr, size);
//	printf("清空数组：");
//	Empty(arr, size);
//	return 0;
//}


////实现一个函数，判断一个数是不是素数。
//#include<stdio.h>
//#include<math.h>
//#pragma warning(disable:4996)
//
//int JudgePrime(int num)
//{
//	for (int i = 2; i <= sqrt(num); ++i)
//	{
//		if (num % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	printf("Please enter a number:");
//	int num = 0;
//	scanf("%d", &num);
//	int ret = JudgePrime(num);
//	if (ret == 1)
//	{
//		printf("The number is a prime\n");
//	}
//	else
//	{
//		printf("The number is not a prime\n");
//
//	}
//	return 0;
//}