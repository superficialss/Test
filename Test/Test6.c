////在屏幕上输出一个菱形
//#include<stdio.h>
//#pragma warning(disable:4996)
//
//void PrintRhombus(int row)
//{
//	int i = 1;
//	int j = 0;
//	while (i <= row)               //上半部分
//	{
//		j = 0;
//		while (j < row - i)
//		{
//			printf(" ");
//			++j;
//		}
//		j = 0;
//		while (j < 2 * i - 1)
//		{
//			printf("*");
//			++j;
//		}
//		printf("\n");
//		++i;
//	}
//	i = 0;
//	while (i < row - 1)              //下半部分
//	{
//		j = 0;
//		while (j < i + 1)
//		{
//			printf(" ");
//			++j;
//		}
//		j = 0;
//		while (j < 2*( row - i - 1) - 1)
//		{
//			printf("*");
//			++j;
//		}
//		printf("\n");
//		++i;
//	}
//}
//
//int main()
//{
//	printf("请输入行数：");
//	int row;
//	scanf("%d", &row);
//	PrintRhombus(row);
//	return 0;
//}



////求0到999之间所有的水仙花数
//#include<stdio.h>
//
//void DaffodilNum()
//{
//	int num = 0;
//	int Units = 0;
//	int Decade = 0;
//	int Hundreds = 0;
//	while (num <= 999)
//	{
//		Units = num % 10;
//		Decade = (num / 10) % 10;
//		Hundreds = (num / 100) % 10;
//		if (num == Units*Units*Units + Decade*Decade*Decade + Hundreds*Hundreds*Hundreds)
//		{
//			printf("%d\t", num);
//		}
//		++num;
//	}
//	printf("\n");
//}
//
//int main()
//{
//	DaffodilNum();
//	return 0;
//}


////求sn=a+aa+aaa+aaaa+aaaaa和
//#include<stdio.h>
//#pragma warning(disable:4996)
//
//int Sum(int a, int n)
//{
//	int sum = 0;
//	int i = 1;
//	int aa = a;
//	while (i <= n)
//	{
//		sum += a;
//		a = a * 10 + aa;
//		++i;
//	}
//	return sum;
//}
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	printf("输入a和n:");
//	scanf("%d %d", &a, &n);
//	printf("%d\n", Sum(a, n));
//	return 0;
//}


////编写一个程序，它从标准输入读取C源代码，并验证所有的花括号都正确的成对出现。
//#include<stdio.h>
//
//int main()
//{
//	int ch = 0;
//	int count = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch == '{')
//		{
//			++count;
//		}
//		else if (ch == '}')
//		{
//			if (count == 0)
//			{
//				printf("不匹配\n");
//				return 0;
//			}
//			else
//			{
//				--count;
//			}
//		}
//		if (count == 0)
//		{
//			printf("匹配\n");
//		}
//		else
//		{
//			printf("不匹配\n");
//		}
//	}
//	return 0;
//}