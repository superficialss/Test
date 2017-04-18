////键盘一直接收字符，如果是小写字符则输出对应的大写字符，如果是大写字符则输出对应的小写字符，若输入数字则不输出
//#include<stdio.h>
//
//int main()
//{
//	int ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'a' &&ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		else if (ch >= 'A' && ch <= 'Z')
//		{
//			printf("%c\n", ch + 32);
//		}
//		else
//		{
//			printf("\n");
//		}
//	}
//}


////求一元二次方程的解
//#include<stdio.h>
//#include<math.h>
//#pragma warning (disable:4996)
//#define EPS 0.0000000000000001
//
//void GetExplain(double a, double b, double c)
//{
//	if ((a > -EPS) && (a < EPS))
//	{
//		printf("不是一元二次方程！\n");
//	}
//	else
//	{
//		double ret = sqrt((b * b) - (4 * a * c));
//		if ((ret > -EPS) && (ret < EPS))
//		{
//			printf("该方程有两个相等的实数根,x1 = x2 = %lf\n", (-b) / (2 * a));
//		}
//		else if (ret > EPS)
//		{
//			printf("该方程有两个不相同的实根，分别为x1 = %lf, x2 = %lf\n", (-b + ret) / (2 * a), (-b - ret) / (2 * a));
//		}
//		else
//		{
//			printf("有两个不相等的共轭复数根！\n");
//		}
//	}
//}
//
//int main()
//{
//	printf("请输入二元一次方程的系数：");
//	double a = 0.0;
//	double b = 0.0;
//	double c = 0.0;
//	scanf("%lf %lf %lf", &a, &b, &c);
//
//	GetExplain(a, b, c);
//
//	return 0;
//}

