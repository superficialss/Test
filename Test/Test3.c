////�����������������
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


//��ȡһ�������������������е�ż��λ������λ���ֱ�������������С�
#include<stdio.h>

int main()
{
	printf("Please input a number:");
	int num = 0;
	scanf("%d", &num);

	return 0;
}


//������������С�������
//�������������Լ��