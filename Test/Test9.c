////ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��������9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
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
//	printf("������������");
//	scanf("%d", &row);
//	PrintMulTable(row);
//	return 0;
//}


////ʹ�ú���ʵ���������Ľ�����
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


////ʵ��һ�������ж�year�ǲ������ꡣ
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


////����һ�����飬ʵ�ֺ���init������ʼ�����顢ʵ��empty����������顢ʵ��reverse���������������Ԫ�ص����á�
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
//	printf("��ʼ�����飺");
//	Init(arr, size);
//	printf("�������飺");
//	Reverse(arr, size);
//	printf("������飺");
//	Empty(arr, size);
//	return 0;
//}


////ʵ��һ���������ж�һ�����ǲ���������
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