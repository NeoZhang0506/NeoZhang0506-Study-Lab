#include<stdio.h>

union Un
{
	char c;
	int i;
};
int main()
{
	union Un un = {0};
	printf("%d\n", sizeof(un));
	printf("%p\n", &(un.i));
	printf("%p\n", &(un.c));
	printf("%p\n", &(un));
	un.i = 0x11223344;
	printf("%x\n", un.i);
	un.c = 0x55;
	printf("%x\n", un.i);
	return 0;
}
