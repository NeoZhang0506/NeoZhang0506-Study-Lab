#include <iostream>
using namespace std;

template <class... Args>
void Print(Args&&... args)
{
	cout << sizeof...(args) <<endl;
}

int main()
{
	double x = 2.2;
	Print();
	Print(1);
	Print(1, string("xxxx"));
	Print(1.1, string("xxxxx"), x);
	
	return 0;
}
