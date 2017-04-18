////多个字符从两边向中间移动
//#include<stdio.h>
//
//void Move()
//{
//	char str1[] = "#############";
//	char str2[] = "I love myself!";
//	printf("%s\n", str1);
//	int begin = 0;
//	int end = strlen(str1) - 1;
//	while (begin <= end)
//	{
//		str1[begin] = str2[begin];
//		str1[end] = str2[end];
//		printf("%s\n", str1);
//		begin++;
//		end--;
//	}
//}
//
//int main()
//{
//	Move();
//	return 0;
//}


////模拟用户登录情景，并且只能登录三次。只允许输入三次密码，如果密码正确则提示登录成，如果三次均输入错误，则退出程序
//#include<stdio.h>
//#include<Windows.h>
//#pragma warning(disable:4996)
//
//void LogIn()
//{
//	char* ConstPassword = "abcdef";
//	char Passward[32];
//	memset(Passward, 0, sizeof(Passward));
//	int i = 3;
//	while (1)
//	{
//		if (i == 0)
//		{
//			printf("登录失败！\n");
//			exit(1);
//		}
//		printf("请输入密码:");
//		scanf("%s", Passward);
//		--i;
//		if (Passward == ConstPassword)
//		{
//			printf("登录成功\n");
//			exit(1);
//		}
//		else
//		{
//			printf("密码错误，请重新输入，你还有%d次机会。\n", i);
//		}
//	}
//}
//
//int main()
//{
//	LogIn();
//	return 0;
//}



////输出一个整数的每一位
//#include<stdio.h>
//#pragma warning(disable:4996)
//
//void GetEach(int data)
//{
//	//while (data)
//	//{
//	//	printf("%d ", data % 10);
//	//	data /= 10;
//	//}
//	if (data >= 10)
//	{
//		GetEach(data / 10);
//	}
//	printf("%d ", data % 10);
//}
//
//int main()
//{
//	printf("请输入一个整数：");
//	int i = 0;
//	scanf("%d", &i);
//	GetEach(i);
//	printf("\n");
//	return 0;
//}


////计算1/1-1/2+1/3-1/4+1/5 ⋯⋯ + 1/99 - 1/100 的值
//#include<stdio.h>
//
//int main()
//{
//	int i = 1;
//	double num = 0;
//	while (i <= 100)
//	{
//		int flag = 1;
//		if (i % 2 == 0)
//		{
//			flag = -1;
//		}
//		num += flag * (1.0 / i);
//		++i;
//	}
//	printf("%lf", num);
//	return 0;
//}


//编写程序数一下 1到 100 的所有整数中出现多少次数字 9
#include<stdio.h>

int main()
{

	return 0;
}
