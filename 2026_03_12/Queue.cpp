#include<iostream>
using namespace std;

template<typename elemType>
class queue
{
public:
	virtual void enQueue(const elemType &x) = 0;
	virtual elemType deQueue() = 0;
	virtual elemType getHead() const = 0;
	virtual bool isEmpty() const = 0;
	virtual ~queue();
};

// 循环队列作为存储方案
template<typename elemType>
class seqQueue : public queue<elemType>
{
public:
	seqQueue(int size = 10);
	~seqQueue();
	void enQueue(const elemType &x);
	elemType deQueue();
	elemType getHead() const;
	bool isEmpty() const;
	bool isFull() const;
	
private:
	elemType *elem;
	int maxSize;
	int front, rear;
	void doubleSpace();
};

template<typename elemType>
seqQueue<elemType>::seqQueue(int size)
{
	elem = new elemType[size];
	maxSize = size;
	front = rear = 0;
}

template<typename elemType>
seqQueue<elemType>::~seqQueue()
{
	delete[] elem;
}

template<typename elemType>
void seqQueue<elemType>::enQueue(const elemType &x)
{
	if(isFull)
		doubleSpace();
	rear = (rear+1) % maxSize;  // 确保rear始终在合法范围内循环
	elem[rear] = x;
}

template<typename elemType>
elemType seqQueue<elemType>::deQueue()
{
	front = (front + 1) % maxSize;
	return elem[front];
}

template<typename elemType>
elemType seqQueue<elemType>::getHead() const
{
	return elem[(front + 1) % maxSize];
}

template<typename elemType>
bool seqQueue<elemType>::isEmpty() const
{
	return rear == front;
}

template<typename elemType>
bool seqQueue<elemType>::isFull() const
{
	return (rear + 1) % maxSize == front;
}

template<typename elemType>
void seqQueue<elemType>::doubleSpace()
{
	elemType *tmp = elem;
	elem = new elemType[2 * maxSize];
	for(int i = 0; i < maxSize; i++)
	{
		elem[i] = tmp[i];
	}
	front = 0;
	rear = maxSize - 1;
	maxSize *= 2;
	delete[] tmp;
}

template<typename elemType>
class linkQueue : public queue<elemType>
{
public:
	linkQueue();
	~linkQueue();
	void enQueue(const elemType &x);
	elemType deQueue();
	elemType getHead() const;
	bool isEmpty() const;
	//bool isFull() const;  // 无需判满操作
	
private:
	struct node
	{
		elemType data;
		node *next;
		node(const elemType &x, node *N = nullptr)
		{
			data = x;
			next = N;
		}
		node() : next(nullptr){};
		~node(){};
	};
	node *front, *rear;
};

template<typename elemType>
linkQueue<elemType>::linkQueue()
{
	front == rear == nullptr;
}

template<typename elemType>
linkQueue<elemType>::~linkQueue()
{
	node *tmp;
	while(front != rear)
	{
		tmp = front;
		front = front->next;
		delete tmp;
	}
}

template<typename elemType>
void linkQueue<elemType>::enQueue(const elemType &x)
{
	if(rear == nullptr)
		front = rear = new node(x);
	else
		rear = rear->next = new node(x);
}

template<typename elemType>
elemType linkQueue<elemType>::deQueue()
{
	node *tmp = front;
	front = front->next;
	elemType value = front->data;
	if(front == nullptr)
		rear = nullptr;
	delete tmp;
	return value;
}

template<typename elemType>
elemType linkQueue<elemType>::getHead() const
{
	return front->data;
}

template<typename elemType>
bool linkQueue<elemType>::isEmpty() const
{
	return front == nullptr;
}

//template<typename elemType>
//bool linkQueue<elemType>::isFull() const
//{
//	return front == rear;
//}
