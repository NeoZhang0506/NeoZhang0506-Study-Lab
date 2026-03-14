#include<iostream>
using namespace std;

template<typename elemType>
class stack
{
public:
	virtual void push(const elemType &x) = 0;
	virtual elemType pop() = 0;
	virtual elemType top() const = 0;
	virtual bool isEmpty() const = 0;
	virtual ~stack(){}
};

template<typename elemType>
class seqStack : public stack<elemType>
{
public:
	seqStack(int initSize = 0);
	~seqStack();
	void push(const elemType &x);
	elemType pop();
	elemType top() const;
	bool isEmpty() const;
	
private:
	elemType elem;
	int maxSize;
	int top_p;
	void doubleSpace();
};

template<typename elemType>
seqStack<elemType>::seqStack(int initSize)
{
	elem = new elemType[initSize];
	maxSize = initSize;
	top_p = -1;
}

template<typename elemType>
seqStack<elemType>::~seqStack()
{
	delete[] elem;
}

template<typename elemType>
void seqStack<elemType>::push(const elemType &x)
{
	if(top_p == maxSize - 1)
		doubleSpace();
	elem[++top_p] = x;
}

template<typename elemType>
elemType seqStack<elemType>::pop()
{
	elemType value = elem[top_p];
	top_p--;
	return value;
}

template<typename elemType>
elemType seqStack<elemType>::top() const
{
	return elem[top_p];
}

template<typename elemType>
bool seqStack<elemType>::isEmpty() const
{
	return top_p == -1;
}

template<typename elemType>
void seqStack<elemType>::doubleSpace()
{
	elemType *tmp = elem;
	elem = new elemType[2 * maxSize];
	for(int i = 0; i < maxSize; i++)
	{
		elem[i] = tmp[i];
	}
	maxSize *= 2;
	delete[] tmp;
}

template<>
