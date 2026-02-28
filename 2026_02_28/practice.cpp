#include<iostream>
using namespace std;

class A
{
public:
	A(int a = 0)
	: _a(a)
	{
		cout << "A():" << this << endl;
	}
	~A()
	{
		
		cout << "~A():" << this << endl;
	}
private:
	int _a;
};

int main()
{
	// new/delete 调用构造函数/析构函数
	A* p1 = (A*)malloc(sizeof(A));
	A* p2 = new A(1);  // 调用构造函数
	free(p1);
	delete p2;  // 调用析构函数
	
	// 内置类型几乎一样
	int* p3 = (int*)malloc(sizeof(int));
	int* p4 = new int;
	free(p3);
	delete p4;
	
	A* p5 = (int*)malloc(sizeof(A)*10);
	A* p6 = new A[10];
	free(p5);
	delete[] p6;
		
	return 0;
}
