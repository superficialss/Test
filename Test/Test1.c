////��100-200֮�������
//#include<stdio.h>
//#include<math.h>
//
//int GetPrime(int data)
//{
//	for (int i = 2; i <= sqrt(data); ++i)
//	{
//		if (data%i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	for (int data = 100; data <= 200; ++data)
//	{
//		if (GetPrime(data))
//		{
//			printf("%d\t", data);
//		}
//	}
//	printf("\n");
//	return 0;
//}

////����˷��ھ���
//#include<stdio.h>
//#pragma warning(disable:4996)
//
//void MulTable(int n)
//{
//	for (int i = 1; i <= n; ++i)
//	{
//		for (int j = 1; j <= i; ++j)
//		{
//			printf("%d X %d = %2d\t", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	printf("Please input n:");
//	int n = 0;
//	scanf("%d", &n);
//	MulTable(n);
//	return 0;
//}

//�ж�1000-2000��֮�������
//#include<stdio.h>
//
//int IsLeapYear(int year)
//{
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
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
//	for (int year = 1000; year <= 2000; ++year)
//	{
//		if (IsLeapYear(year))
//		{
//			printf("%d\t", year);
//		}
//	}
//	printf("\n");
//	return 0;
//}