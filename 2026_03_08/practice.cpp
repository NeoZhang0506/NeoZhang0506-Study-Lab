#include<iostream>
using namespace std;
class Student;

class Person
{
public:
	friend void Display(const Person& p, const Student& s);
protected:
	string _name;
};

class Student : public Person
{
protected:
	int _stuNum;  // 学号
};

void Display(const Person& p, const Student& s)
{
	cout << p._name << endl;
	cout << s._stuNum << endl;
}

int main()
{
	Person p;
	
	Student s;
	// 编译报错：error C2248: “Student::_stuNum”: ⽆法访问 protected 成员
	// 解决⽅案：Display也变成Student 的友元即可
	
	Display(p, s);
	
	return 0;
}
