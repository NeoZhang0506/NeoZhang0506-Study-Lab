#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int my_strlen(const char *str)  //实现方式一是用计数器
{
	int cnt = 0;
	if (str == NULL)
		return -1;
	while (*str++)
		cnt++;
	return cnt;
}

int myStrlen(const char *str)  //实现方式二用指针加法
{
	if (str == NULL)
		return -1;
	const char *p = str;
	while(*p != '\0')
		p++;
	return p-str;
}

char* my_strcpy(char *dest, const char *src)
{
	if(dest == NULL || src == NULL)
		exit(0);
	
	char *ret = dest; 
	while((*dest++ = *src++))
	{
		;
	}
	return ret;
}

char* my_strcat(char *dest, const char *src)
{
	if(dest == NULL || src == NULL)
		exit(0);
	
	char *ret = dest;
	while (*dest)
		dest++;
	while((*dest++ = *src++))
	{
		;
	}
	return ret;
}

int my_strcmp(const char *str1, const char *str2)
{
	if(str1 == NULL || str2 == NULL)
		return -1;
	
	while(*str1 == *str2)
	{
		if(*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	return *str1 - *str2;
}

int main()
{
	const char *str1 = "abcdfeg";
	int ret1 = strlen(str1);
	int ret2 = my_strlen(str1);
	int ret3 = myStrlen(str1);
	const char *str2 = "abcd";
	int ret = my_strcmp(str1, str2);
	printf("%d\n", ret);
	printf("strlen = %d, my_strlen = %d, myStrlen = %d\n", ret1, ret2, ret3);
	return 0;
}
