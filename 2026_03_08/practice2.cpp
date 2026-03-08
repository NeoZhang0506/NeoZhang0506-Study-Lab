#include<iostream>
using namespace std;

class Person
{
public:
	string _name;
	static int _count;
};

int Person::_count = 0;

class Student : public Person
{
protected:
	int _stuNum;
};

int main()
{
	Person p;
	Student s;
	
	// 这里的运行结果可以看到非静态成员_name的地址是不一样的
	// 说明派生类继承下来了, 父派生类对象各有一份
	cout << &p._count << endl;
	cout << &s._count << endl;
	
	// 公有的情况下,父派生类指定类域都可以访问静态成员
	cout << Person::_count << endl;
	
	return 0;
}
