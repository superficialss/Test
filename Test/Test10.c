////两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//#include<stdio.h>
//#pragma warning(disable:4996)
//
//int SearcheDifferent(int m, int n)
//{
//	int data = 0;
//	int count = 0;
//	data = m^n;
//	while (data)
//	{
//		if (data % 2 == 1)
//		{
//			++count;
//		}
//		data /= 2;
//	}
//	return count;
//}
//
//int main()
//{
//	printf("Please enter two numbers:");
//	int m = 0;
//	int n = 0;
//	scanf("%d, %d", &m, &n);
//	int ret = SearcheDifferent(m ,n);
//	printf("%d\n", ret);
//	return 0;
//}


//编写函数：unsigned int reverse_bit(unsigned int value);这个函数的返回值value的二进制位模式从左到右翻转后的值。
////如:在32位机器上25这个值包含下列各位:00000000000000000000000000011001翻转后:10011000000000000000000000000000程序结果返回：2550136832
//#include<stdio.h>
//#pragma warning(disable:4996)
//
//unsigned int reverse_bit(unsigned int value)
//{
//	int len = sizeof(value) * 8;
//	unsigned int tmp = 0;
//	for (int i = 0, j = len - 1; i < len, j > 0; ++i, --j)
//	{
//		if (value & (0x01 << i))
//		{
//			tmp |= (0x01 << j);
//		}
//	}
//	return tmp;
//}
//
//int main()
//{
//	int value = 0;
//	printf("Please enter a number:");
//	scanf("%u", &value);
//	unsigned int ret = reverse_bit(value);
//	printf("%u\n", ret);
//	return 0;
//}


////不使用（a + b） / 2这种方式，求两个数的平均值。
//#include<stdio.h>
//#pragma warning(disable:4996)
//
//int Average(int a, int b)
//{
//	int cur = 0;
//	//cur = a + ((b - a) >> 1);
//	cur = (a&b) + (a^b) / 2;
//	return cur;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("Please enter two number:");
//	scanf("%d %d", &a, &b);
//	printf("%d\n", Average(a, b));
//	return 0;
//}


////一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。请找出这个数字。（使用位运算）
////如：数据：1 3 5 7 1 3 5 这组数据中，只有7出现了一次。结构：找到的数就是：7.
//#include<stdio.h>
//
//int FindSignal(int arr[], int size)
//{
//	int tmp = 0;
//	for (int i = 0; i < size; ++i)
//	{
//		tmp ^= arr[i];
//	}
//	return tmp;
//}
//
//int main()
//{
//	int arr[7] = { 1,3,5,7,1,3,5 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int ret = FindSignal(arr, size);
//	printf("%d\n", ret);
//	return 0;
//}
