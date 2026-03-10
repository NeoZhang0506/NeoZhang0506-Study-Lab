#include<iostream>
using namespace std;

template<typename elemType>
class list
{
public:
	virtual void clear();  // 清空线性表
	virtual int length() const = 0;  // 获取线性表的长度即元素的个数
	virtual void insert(int i, const elemType &x) = 0;  // 在第 i 个位置插入一个元素 x
	virtual void remove(int i);  // 删除第 i 个元素
	virtual int search(const elemType &x) const = 0;  // 搜索元素 x 是否在线性表中出现
	virtual elemType visit(int i) const = 0;  // 访问线性表某个元素
	virtual void traverse() const = 0;  // 遍历线性表
	virtual ~list(){};
};

template<typename elemType>
class seqList : public list<elemType>  
{
private:
	elemType *data;
	int currentLength;
	int maxSize;
	void doubleSpace();
	
public:
	seqList(int initSize = 10);
	~seqList() { delete[] data; }
	void clear() { 
		delete[] data; 
		data = nullptr;
		currentLength = 0;
		maxSize = 0;
	}
	int length() const { return currentLength; }
	void insert(int i, const elemType &x);
	void remove(int i);
	int search(const elemType &x) const;
	elemType visit(int i) const { return data[i]; }
	void traverse() const;
};

template<typename elemType>
seqList<elemType>::seqList(int initSize)
{
	data = new elemType[initSize];
	maxSize = initSize;
	currentLength = 0;
}

template<typename elemType>
int seqList<elemType>::search(const elemType &x) const
{
	for(int i = 0; i < currentLength; i++)
	{
		if(data[i] == x)
		{
			return i;
		}
	}
	return -1;
}

template<typename elemType>
void seqList<elemType>::traverse() const
{
	for(int i = 0; i < currentLength; i++)
	{
		cout << i <<' ';
	}
	cout << endl;
}

template<typename elemType>
void seqList<elemType>::insert(int i, const elemType &x)
{
	if(currentLength == maxSize)
		doubleSpace();
	
	for(int j = currentLength; j > i; j--)
	{
		data[j + 1] = data[j];
	}
	data[i] = x;
	currentLength++;
}

template<typename elemType>
void seqList<elemType>::remove(int i)
{
	for(int j = i; j < currentLength - 1; j++)
	{
		data[j - 1] = data[j];
	}
	currentLength--;
}

template<typename elemType>
void seqList<elemType>::doubleSpace()
{
	elemType *tmp = data;  // 存放旧数据
	maxSize *= 2;
	data = new elemType[maxSize];  // 扩容
	for(int i = 0; i < currentLength; i++)
		data[i] = tmp[i];
	delete[] tmp;  // 回收旧空间
}
