#include<iostream>
using namespace std;

template<typename T>
class Stack
{
public:
	Stack(size_t capacity = 4)
	{
		_array = newT[capacity];
		_capacity = capacity;
		_size = 0;
	}
	
	void Push(const T& data);
private:
	T* _array;
	size_t _capacity;
	size_t _size;
};

template<class T>
void Stack<T>::push(const T& data)
{
	_array[_size] = data;
	++_size;
}

int main()
{
	Stack<int> st1;
	Stack<double> st2;
	
	return 0;
}
