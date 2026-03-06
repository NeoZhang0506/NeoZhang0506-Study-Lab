#include<iostream>
using namespace std;

class Person
{
public:
	// 身份认证
	void identity()
	{
		cout << "void identity()" << _name << endl;
	}
protected:
	string _name = "张三";
	string _address;
	string _tel;
	int _age = 18;
};

class Student : public Person
{
public:
	// 学习
	void study()
	{
		// ...
	}
protected:
	string _stuid;
};

class Teacher : public Person
{
	void teaching()
	{
		// ...
	}
protected:
	string _title;
};

int main()
{
	Student s;
	Teacher t;
	
	s.identity();
	t.identity();
	
	return 0;
}
