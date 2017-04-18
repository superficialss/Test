////交换两个数组的内容
//#include<stdio.h>
//
//void Swap(int* a, int* b, int len)
//{
//	for (int i = 0; i < len; ++i)
//	{
//		a[i] = a[i] ^ b[i];
//		b[i] = a[i] ^ b[i];
//		a[i] = a[i] ^ b[i];
//
//	}
//}
//
//int main()
//{
//	int a[5] = { 1,2,4,6,7 };
//	int b[5] = { 3,4,5,6,8 };
//	printf("Before:");
//	printf("\n\ta:");
//	for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n\tb:");
//	for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i)
//	{
//		printf("%d ", b[i]);
//	}
//	Swap(a, b, sizeof(a) / sizeof(a[0]));
//	printf("\nAfter:");
//	printf("\n\ta:");
//	for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n\tb:");
//	for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i)
//	{
//		printf("%d ", b[i]);
//	}
//	printf("\n");
//
//	return 0;
//}


////获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列。
//#include<stdio.h>
//#pragma warning(disable:4996)
//
//int main()
//{
//	printf("Please input a number:");
//	int num = 0;
//	scanf("%d", &num);
//	
//	printf("偶数位系列：");
//	for (int i = 31; i >= 0; i -=2)
//	{
//		printf("%d ", (num >> i) & 0x01);
//	}
//	printf("\n");
//	printf("奇数位系列：");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 0x01);
//	}
//	printf("\n");
//
//
//	//int arr[32];
//	//int i = 0;
//	//while (i < 32)               //将整数转化为二进制
//	//{
//	//	if (num % 2 == 1)
//	//	{
//	//		arr[i] = 1;
//	//	}
//	//	else
//	//	{
//	//		arr[i] = 0;
//	//	}
//	//	num /= 2;
//	//	++i;
//	//}
//
//	//printf("偶数位序列：");
//	//for (i = 31; i >= 0; i -=2)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	//printf("\n");
//
//	//printf("奇数位序列：");
//	//for (i = 30; i >= 0; i -= 2)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	//printf("\n");
//
//	return 0;
//}


////将三个数按从小到大输出
//#include<stdio.h>
//#pragma warning(disable:4996)
//
//void Print(int a, int b, int c)
//{
//	if (a > b)
//	{
//		if (b > c)   //a > b > c
//		{
//			printf("%d %d %d\n", c, b, a);
//		}
//		else        //(a > b) && (b < c)
//		{
//			if (a > c)     //a > c > b
//			{
//				printf("%d %d %d\n", b, c, a);
//			}
//			else      //c > a > b
//			{
//				printf("%d %d %d\n", b, a, c);
//			}
//		}
//	}
//	else        //a < b
//	{
//		if (b < c)     //a < b < c
//		{
//			printf("%d %d %d\n", a, b, c);
//		}
//		else      //(b > c) && (a < b)
//		{
//			if (a > c)     // b > a > c
//			{
//				printf("%d %d %d\n", c, a, b);
//			}
//			else       //b > c > a
//			{
//				printf("%d %d %d\n", a, c, b);
//
//			}
//		}
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("Please input three number:");
//	scanf("%d %d %d", &a, &b, &c);
//
//	Print(a,b,c);
//
//	return 0;
//}


//求两个数的最大公约数
#include<stdio.h>
#pragma warning(disable:4996)

//int MaxCommonDivisor(int a, int b)   //辗转相减法非递归
//{
//	while (1)
//	{
//		if (a > b)
//		{
//			a -= b;
//		}
//		else if (a < b)
//		{
//			b -= a;
//		}
//		else
//		{
//			return a;
//		}
//	}
//
//}

//int MaxCommonDivisor(int a, int b)          //辗转相减法递归
//{
//	if (a > b)
//	{
//		return MaxCommonDivisor(a -= b, b);
//	}
//	else if (a < b)
//	{
//		return MaxCommonDivisor(a, b -= a);
//	}
//	else
//	{
//		return a;
//	}
//}

//int MaxCommonDivisor(int a, int b)          //辗转相除法非递归
//{
//	while (a*b != 0)
//	{
//		if (a > b)
//		{
//			a %= b;
//		}
//		else
//		{
//			b %= a;
//		}
//	}
//	return a == 0 ? b : a;
////}
//
//int MaxCommonDivisor(int a, int b)     //辗转相除法递归
//{
//	if (a == 0 || b == 0)
//	{
//		return a == 0? b : a;
//	}
//	else
//	{
//		if (a > b)
//		{
//			return MaxCommonDivisor(a %= b, b);
//		}
//		else
//		{
//			return MaxCommonDivisor(a, b %= a);
//		}
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("Please input two number:");
//	scanf("%d %d", &a, &b);
//
//	printf("MaxCommonDivisor:%d\n", MaxCommonDivisor(a, b));
//
//	return 0;
//}
