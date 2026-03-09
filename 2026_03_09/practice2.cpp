#include<iostream>
using namespace std;

class Person
{
protected:
	string _name;  // 姓名
	string _sex;  // 性别
	int _age;  // 年龄
};

class Student : public Person
{
public:
	int _No;  // 学号
};

int main()
{
	Student sobj;
	// 1. 派生类对象可以赋值给基类的指针/引用
	Person* pp = &sobj;
	Person& rp = sobj;
	
	Person pobj = sobj;
	
	// 2. 基类对象不能赋值给派生类对象, 这里会编译报错
	sobj = pobj;
	
	return 0;
}

namespace Neo
{

// stack和vector的关系，既符合is-a也符,合has-a 
	template<class T>
	class stack : public std::vector<T>
	{
	public:
		void push(const T& x)
		{
			// 基类是类模板时，需要指定⼀下类域，
			// 否则编译报错:error C3861: “push_back”: 找不到标识符
			// 因为stack<int>实例化时，也实例化	vector<int>了
			// 但是模版是按需实例化，push_back等成员函数未实例化，所以找不到
			
			vector<T>::push_back(x);
			//push_back(x);
		}
		void pop()
		{
			vector<T>::pop_back();
		}
		const T& top()
		{
			return vector<T>::back();
		}
		bool empty()
		{
			return vector<T>::empty();
		}
	};
}
int main()
{
	bit::stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	while (!st.empty())
	{
		cout << st.top() << " ";
		st.pop();
	}
	return 0;
}
