////����һֱ�����ַ��������Сд�ַ��������Ӧ�Ĵ�д�ַ�������Ǵ�д�ַ��������Ӧ��Сд�ַ������������������
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


////��һԪ���η��̵Ľ�
//#include<stdio.h>
//#include<math.h>
//#pragma warning (disable:4996)
//#define EPS 0.0000000000000001
//
//void GetExplain(double a, double b, double c)
//{
//	if ((a > -EPS) && (a < EPS))
//	{
//		printf("����һԪ���η��̣�\n");
//	}
//	else
//	{
//		double ret = sqrt((b * b) - (4 * a * c));
//		if ((ret > -EPS) && (ret < EPS))
//		{
//			printf("�÷�����������ȵ�ʵ����,x1 = x2 = %lf\n", (-b) / (2 * a));
//		}
//		else if (ret > EPS)
//		{
//			printf("�÷�������������ͬ��ʵ�����ֱ�Ϊx1 = %lf, x2 = %lf\n", (-b + ret) / (2 * a), (-b - ret) / (2 * a));
//		}
//		else
//		{
//			printf("����������ȵĹ��������\n");
//		}
//	}
//}
//
//int main()
//{
//	printf("�������Ԫһ�η��̵�ϵ����");
//	double a = 0.0;
//	double b = 0.0;
//	double c = 0.0;
//	scanf("%lf %lf %lf", &a, &b, &c);
//
//	GetExplain(a, b, c);
//
//	return 0;
//}

