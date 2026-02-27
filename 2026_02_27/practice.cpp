#include<iostream>
using namespace std;

template<class T>
T Add(const T& left, const T& right)
{
	return left + right;
}

int main()
{
	int a1 = 10, a2 = 20;
	double d1 = 10.0, d2 = 20.1;
	int ret1 = Add(a1, a2);
	double ret2 = Add(d1, d2);
	cout << ret1 << endl;
	cout << ret2 << endl; 
	
	Add(a1,d1);   // 这条语句无法编译
	return 0;
}
