//C Primer Plus P184
#define _CRT_SECURE_NO_WARINGS
#include<stdio.h>


//1
//int main()
//{
//	char ch = getchar();
//	int cnt1 = 0;
//	int cnt2 = 0;
//	int cnt3 = 0;
//	while (ch != "#")
//	{
//		if(ch == SPACE)
//			cnt1 +=1;
//		else if(ch == ENTER)
//			cnt2 +=1;
//		else
//			cnt3 +=1;
//	}
//	printf("%d %d %d",cnt1, cnt2, cnt3)
//	
//	return 0;
//
//}我自己写的有bug的版本

//
//int main(void)
//{
//    int ch;              /* 必须是 int，否则 EOF 无法区分 */
//    long cnt_space = 0;
//    long cnt_enter = 0;
//    long cnt_other = 0;
//
//    while ((ch = getchar()) != '#')   /* 1. 读字符放循环条件里 */
//    {
//        if (ch == ' ')                /* 2. 用字符常量 */
//            ++cnt_space;
//        else if (ch == '\n')
//            ++cnt_enter;
//        else
//            ++cnt_other;
//    }
//    printf("%ld %ld %ld\n", cnt_space, cnt_enter, cnt_other);
//    return 0;
//}

//2
//int main()
//{	
//	int ch;
//	while ((ch = getchar()) != '#')
//	{
//		
//	}
//	return 0;
//}
//3
//int main()
//{
//	int ch;
//	int cnt_ou = 0;    //计算偶数的个数
//	int ou = 0;		   //计算偶数的和
//	int cnt_ji = 0;    //计算奇数的个数
//	int ji = 0;		   //计算奇数的和
//	while ((ch = getchar()) != 0)
//	{
//		if (ch % 2 == 0)
//		{
//			ou += ch;
//			++cnt_ou;
//		}
//		else {
//			ji+=ch;
//			++cnt_ji;
//		}
//		ch =getchar();
//		//接下来计算平均和个数即可,我还没有搞懂这块的函数应该怎么用
//	}
//	printf("%d\n", cnt_ou);
//	return 0;
//}

//4
int main()
{

	return 0;
}