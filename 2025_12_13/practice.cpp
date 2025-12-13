//C++ Primer Plus
#include<iostream>
using namespace std;

////1
//int main()
//{
//	int n = 0;
//	const int factor = 12;
//	cin >> n;
//	int re = n * factor;
//	cout << "英寸：" << n << endl;
//	cout << "英尺：" << re << endl;//没搞懂如何用下划线字符来指示输入位置
//	return 0;
//}  没搞懂周末看看答案的代码

////2
//int main()
//{
//	int foot,inch,pound;
//	cout << "请输入英尺：" << endl;
//	cin >> foot;
//	cout << "请输入英寸：" << endl;
//	cin >> inch;
//	cout << "请输入体重：" << endl;
//	cin >> pound;
//	//换算
//	const int factor1 = 12;
//	const float factor2 = 0.0254;
//	const float factor3 = 2.2;
//
//	int inches = inch + foot * factor1;
//	float height = factor2 * inches;
//	float weight = pound / factor3;
//	float BMI = weight / (height * height);
//	cout << "BMI: " << BMI << endl;
//
//	return 0;
//}编译通过

////3
//int main()
//{
//	int degrees, minutes, seconds;
//
//	cout << "Enter a latitude in degrees, minutes, and seconds."  << endl;
//	cout << "First, enter the degrees: ";
//	cin >> degrees;
//	cout << "Next, enter the minutes of arc: ";
//	cin >> minutes;
//	cout << "Finally, enter the seconds of arc: ";
//	cin >> seconds;
//	const int factor = 60;
//	float min = minutes + seconds / factor;
//	double de = degrees + min / factor;
//	cout << degrees << " degrees,";
//	cout << minutes << " minutes,";
//	cout << seconds << " seconds ";
//	cout << "= " << de << "degrees" << endl;
//
//	return 0;
//}编译通过

////4
//int main()
//{
//	long long seconds;
//	cout << "Enter the numbers of seconds: ";
//	cin >> seconds;
//
//	const int factor = 60;
//	const int fa = 24;
//	int sec_re = seconds % factor;
//	int min = seconds / factor;
//	int min_re = min % factor;
//	int hour = min / factor;
//	int hour_re = hour % fa;
//	int day = hour / fa;
//
//	cout << seconds << " seconds = ";
//	cout << day << " days, ";
//	cout << hour_re << " hours, ";
//	cout << min_re << " minutes, ";
//	cout << sec_re << " seconds";
//	return 0;
//}编译通过

//5
//int main()
//{
//	long long pop, US;
//	cout << "Enter the world's population: ";
//	cin >> pop;
//	cout << "Enter the population of the US: ";
//	cin >> US;
//
//	double percent = static_cast<double>(US) / pop;//这道题的知识点在这里整数提升的部分
//	double re = 100 * percent;
//	cout << "The population of the US is ";
//	cout << re << "% of the world population.";
//	return 0;
//}编译通过

//6
//int main()
//{
//	int yingli, jialun;
//	double re;
//
//	cin >> yingli >> jialun;
//	re = jialun / yingli;
//	cout << re << endl;
//
//	return 0;
//}有点实在太简单了随便写的

////7
//int main()
//{
//	double in;
//	cin >> in;
//	double L = in * 100;
//	double re = 62.14 / (L * 3.785);
//	cout << re;
//	return 0;
//}题干看得有点懵逼换算的题目估计不难简单看看答案代码就行了