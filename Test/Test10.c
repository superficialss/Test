////����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
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


//��д������unsigned int reverse_bit(unsigned int value);��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
////��:��32λ������25���ֵ�������и�λ:00000000000000000000000000011001��ת��:10011000000000000000000000000000���������أ�2550136832
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


////��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
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


////һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ����ҳ�������֡���ʹ��λ���㣩
////�磺���ݣ�1 3 5 7 1 3 5 ���������У�ֻ��7������һ�Ρ��ṹ���ҵ��������ǣ�7.
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
