//C Primer Plus P114
#define _CRT_SECURE_NO_WARRINGS
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

//4
int main()
{

	return 0;
}