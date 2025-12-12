//C++ Primer Plus P30
#include<iostream>
using namespace std;

////1
//int main()
//{
//	cout << "姓名：NeoZhang0506" << endl;
//	cout << "地址：湖北省武汉市洪山区武汉理工大学南湖校区" << endl;
//	return 0;
//}编译通过

////2
//int main()
//{
//	cout << "输入一个以long为单位的距离：" << endl;
//	int Long = 0;
//	cin >> Long;
//	int re = 220 * Long;
//	cout << "转换结果为：" << re << endl;
//	return 0;
//}编译通过
//注意IO流的 <<  >> 符号方向问题

////3
//void mice()
//{
//	cout << "They are blind mice." << endl;
//}
//
//void see()
//{
//	cout << "See how they run." << endl;
//}
//
//int main()
//{
//	mice();
//	mice();
//	see();
//	see();
//	return 0;
//}编译通过

////4
//int main()
//{
//	cout << "Enter your age: ";
//	int age = 0;
//	cin >> age;
//	int month = age * 12;
//	cout << "Your age in month is " << month << endl;
//	return 0;
//}编译通过

////5
//double calculator(int n)
//{
//	float re = 1.8 * n + 32.0;
//	return re;
//}
//
//int main()
//{
//	cout << "Please enter a Celsius value:";
//	int n = 0;
//	cin >> n;
//	double re = calculator(n);
//	cout << n << " degrees Celsius is " << re << " degrees Fahreheit";
//	return 0;
//}编译通过

////6
//double calculator(float n)
//{
//	double re = 63240 * n;
//	return re;
//}
//int main()
//{
//	cout << "Enter the number of light years: ";
//	float n = 0;
//	cin >> n;
//	double re = calculator(n);
//	cout << n << " light years = " << re << "astronomical units.";
//	return 0;
//}编译通过还是注意上题同样的问题

////7
//void hour(int a, int b)
//{
//	cout << "Time: "<< a << ":" << b << endl;
//}
//int main()
//{
//	int a, b;
//	cout << "Enter the number of hours: ";
//	cin >> a;
//	cout << "Enter the number of mintues: ";
//	cin >> b;
//	hour(a, b);
//	return 0;
//}编译通过