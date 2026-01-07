//C Primer Plus P237
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

////1
//double min(double x, double y)
//{
//	double result = 0;
//	if (x > y)
//	{
//		result = y;
//	}
//	else
//	{
//		result = x;
//	}
//
//	return result;
//}
//
//int main()
//{
//	double a, b;
//	a = 0.3;
//	b = 0.2;
//	double result = min(a, b);
//	printf("%f", result);
//	return 0;
//}

//2
void chline(char ch, int i, int j)
{

}

//3
void printChar(char ch, int i, int j)
{

}

////4
//double harmonicMean(double x, double y)
//{
//	double a, b;
//	a = 1/x;
//	b = 1/y;
//	double avg = (a + b) / 2;
//	double result = 1 / avg;
//	return result;
//}
//
//int main()
//{
//	double x = 0.1, y = 0.2;
//	double result = harmonicMean(x, y);
//	printf("%f", result);
//	return 0;
//}

//5
void larger_of(double *x, double *y)
{
	double max = (*x > *y) ? *x : *y;
	*x = max;
	*y = max;   //这里的代码还是有一点问题,全是坑
}

int main()
{
	double a = 3.5, b = 2.1;
	printf("调用前: a = %.1f, b = %.1f\n", a, b);

	larger_of(&a, &b);
	printf("调用后: a = %.1f, b = %.1f\n", a, b);
}

////6
//void sort(double* x, double* y, double* z)
//{
//	double max, mid, min;
//	double* tmp;
//	if (*x > *y)
//	{
//		*tmp = *x;
//		*x = *y;
//		*y = *tmp;
//	}
//	if (*y > *z)
//	{
//		*tmp = *y;
//		*y = *z;
//		*z = *tmp;
//	}
//	if (*x > *y)
//	{
//		*tmp = *x;
//		*x = *y;
//		*y = *tmp;
//	}
//}

//11
void Fibonacci()
{

}