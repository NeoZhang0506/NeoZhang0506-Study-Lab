//C Primer Plus 习题练习 P33
#include<stdio.h>

////1
//int main()
//{
//	printf("zhang hao\n");
//	printf("hao\nzhang\n");
//	printf("zhang");
//	printf("hao");
//	return 0;
//}编译通过

////2
//int main()
//{
//	printf("姓名：张浩\n");
//	printf("地址：湖北省武汉市洪山区武汉理工大学南湖校区");
//	return 0;
//}编译通过

////3
//int main()
//{
//	int age = 21;
//	int day = 365 * age;
//	printf("年龄：%d\n", age);
//	printf("天数：%d\n", day);
//	return 0;
//}编译通过

////4
//void jolly()
//{
//	printf("For he's a jolly good fellow\n");
//	printf("For he's a jolly good fellow\n");
//	printf("For he's a jolly good fellow\n");
//}
//
//void deny()
//{
//	printf("Which nobody can deny!\n");
//}
//
//int main()
//{
//	jolly();
//	deny();
//	return 0;
//}编译通过

////5
//void br()
//{
//	printf("Brzail, Russia");
//}
//
//void ic()
//{
//	printf("India, China");
//}
//
//int main()
//{
//	printf("Brzail, Russia");
//	printf(", ");
//	printf("India, China");
//	printf("\n");
//	printf("Brzail, Russia");
//	printf("\n");
//	printf("India, China");
//	printf("\n");
//	return 0;
//}编译通过

////6
//int main()
//{
//	int toes = 10;
//	int two_toes = 2 * toes;//toes的两倍
//	int toes2 = toes * toes; //toes的平方
//	printf("toes：%d\n", toes);
//	printf("toes的两倍：%d\n", two_toes);
//	printf("toes的平方：%d\n", toes2);
//	return 0;
//}编译通过
//最开始把二倍的变量定义成2toes报了一个警告，命名规范掌握的有点问题下次注意


////7
//void Smile()
//{
//	printf("Smile!");
//}
//
//int main()
//{
//	Smile();
//	Smile();
//	Smile();
//	printf("\n");
//	Smile();
//	Smile(); 
//	printf("\n");
//	Smile();
//	printf("\n");
//	return 0;
//}编译通过

void two()
{
	printf("two\n");
}

void one_three()
{
	printf("one\n");
	two();
	printf("three\n");
}
//
//void two()
//{
//	printf("two");
//}
int main()
{
	printf("starting now!");
	one_three();
	printf("done!");
	return 0;
}//编译通过
//这里需要注意函数的顺序问题two()函数在one_three()函数下方无法编译
//解决方法：一是调换顺序像上述代码所示，二是提前声明代码我放在下方
//void two();
//
//void one_three() {
//	printf("one\n");
//	two();
//	printf("three\n");
//}
//
//void two() {
//	printf("two\n");
//}
//
//int main() {
//	printf("starting now!");
//	one_three();
//	printf("done!");
//	return 0;
//}