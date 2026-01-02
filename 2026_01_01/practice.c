//C Primer Plus P149
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//1
int main()
{
	char arr[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
	'h', 'i', 'j', 'k', 'l', 'm', 'n',
	'o', 'p', 'q', 'r', 's', 't',
	'u', 'v', 'w', 'x', 'y', 'z' }; 
	for (int i = 0; i <= 25; i++)
	{
		printf("%c ", arr[i]);
	}
	return 0;
}