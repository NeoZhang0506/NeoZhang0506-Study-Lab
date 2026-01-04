//C Primer Plus P114
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

////1
//int main()
//{
//	const int factor = 60;
//	
//	while (1)
//	{
//		int a = 0;
//		printf("请输入一个时间: ");
//		scanf_s("%d", &a);
//		int re_hour = a / factor;
//		int re_min = a % factor;
//		printf("%d:%d\n", re_hour, re_min);
//		if( a <= 0)
//			break;
//	}
//	return 0;
//}编译通过

////2
//int main()
//{
//	int a = 0;
//	const int factor = 10;
//	printf("请输入一个整数: ");
//	scanf_s("%d", &a);
//	if (a, a <= factor + a, a++)
//	{
//		printf("%d ", a);
//	}
//	return 0;
//}编译通过

////3
//int main()
//{
//	const int factor = 7;
//	while(1)
//	{
//		int day = 0;
//		printf("Please enter the days: ");
//		scanf_s("%d", day);
//		int re_day = day % factor;
//		int re_week = day / factor;
//		printf("%d is days are %d weeks, %d days", day, re_week, re_day);
//		if(day<=0)
//			break;
//	}
//
//	return 0;
//}代码出现了问题

////4
//int main()
//{
//	
//	double enter = 0;
//	printf("Enter a height in centimeters: ");
//	scanf("%s", &enter);
//
//	return 0;
//}

////5
//int main()
//{
//	int count, sum, days;
//
//	count = 0;
//	sum = 0;
//	days = 0;
//	printf("Enter the days: ");
//	scanf("%d", &days);
//	while(count++ < days)
//		sum = sum + count;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}编译通过

////6
//int pow(int n)
//{
//	return n*n;
//}
//
//int main()
//{
//	int count, sum, days;
//
//	count = 0;
//	sum = 0;
//	days = 0;
//	printf("Enter the days: ");
//	scanf("%d", &days);
//	while (count++ < days)
//		sum = sum + pow(count);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

////7
//double square(double n)
//{
//	return n*n*n;
//}
//int main()
//{
//	double n = 0;
//	printf("请输入一个double类型的数: ");
//	scanf("%f", &n);
//	printf("%f", square(n));
//	return 0;
//}

////8
//int main()
//{
//	printf("This program computes moduli.");
//	int integer = 0;
//	printf("Enter an integer to serve as the second operand: ");
//	scanf("%d", integer);
//	while (1)
//	{
//		int input = 0;
//		printf("Enter the first operand: ");
//		scanf("%d", &input);
//		int re = input % integer;
//		printf("%d % %d is %d\n", input, integer, re);
//		if (input <= 0)
//		{
//			printf("Done");
//			break;
//		}
//	}
//	return 0;
//}报警告说我指向空指针, 我的技术暂时不支持我找到原因

//9
int main()
{

	return 0;
}