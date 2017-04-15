////给定两个整型变量的值，将两个值的内容进行交换
//#include<stdio.h>
//
//void Swap(int *a, int *b)
//{
//	int tmp = 0;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("Before: a:%d  b:%d\n", a, b);
//	Swap(&a, &b);
//	printf("After:  a:%d  b:%d\n", a, b);
//	return 0;
//}

////不创建临时变量，交换两个数的内容
//#include<stdio.h>
//
//void Swap(int* a, int* b)
//{
//	*a = *a - *b;
//	*b = *a + *b;
//	*a = *b - *a;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("Before: a:%d  b:%d\n", a, b);
//	Swap(&a, &b);
//	printf("After:  a:%d  b:%d\n", a, b);
//	return 0;
//}

////求10个整数中的最大值
//#include<stdio.h>
//#include<math.h>
//#pragma warning(disable:4996)
//
//int GetMaxNum(int* a, int len)
//{
//	int max = a[0];
//	for (int i = 1; i < len; ++i)
//	{
//		if (a[i] > max)
//		{
//			max = a[i];
//		}
//	}
//	return max;
//}
//
//int main()
//{
//	int a[10] = { 0,3,2,8,6,9,7,1,5,4 };
//	printf("MaxNum:%d\n", GetMaxNum(a, 10));
//	return 0;
//}

////写一个函数，返回二进制中1的个数
//#include<stdio.h>
//
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	while (value > 0)
//	{
//		////if (value & 1)
//		//if(value % 2 == 1)
//		//{
//		//	++count;
//		//}
//		//value >>= 1;
//		value = value&(value - 1);
//		++count;
//	}
//	return count;
//}
//
//int main()
//{
//	int value = 15;
//	printf("%d\n", count_one_bits(value));
//	return 0;
//}