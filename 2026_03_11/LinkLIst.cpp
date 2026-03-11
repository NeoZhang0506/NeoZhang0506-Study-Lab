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
class sLinkList : public list<elemType>
{
public:
	sLinkList()
	{
		head = new node;  // 申请头结点
		currentLength = 0;
	}
	~sLinkList()
	{
		clear();
		delete head;  // 删除头结点
	}
	void clear();
	int length() const
	{
		return currentLength;
	}
	void insert(int i, const elemType &x);  // 增加某个元素
	void remove(int i);  // 删除某个元素
	int search(const elemType &x) const;  // 查找链表
	elemType visit(int i) const;  // 访问链表某个元素
	void traverse() const;  // 遍历链表

private:
	struct node
	{
		elemType data;
		node* next;
		node(const elemType &x, node *n = nullptr)
		{
			data = x;
			next = n;
		}
		node():next(nullptr){}
		~node(){};
	};
	
	node *head;
	int currentLength;
	node *find(int i) const;
};

template<typename elemType>
typename sLinkList<elemType>::node *sLinkList<elemType>::find(int i) const
{
	node *p = head;
	while(i >= 0)
	{
		p = p->next;
		i--;
	}
	return p;
}

template<typename elemType>
int sLinkList<elemType>::search(const elemType &x) const
{
	node *p = head;
	int cnt = 0;
	while(p)
	{
		if(p->data == x)
			return cnt;
		p = p->next;
		cnt++;
	}
	return -1;
}

template<typename elemType>
void sLinkList<elemType>::traverse() const
{
	node *p = head;
	while(p)
	{
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}

template<typename elemType>
elemType sLinkList<elemType>::visit(int i) const
{
	node *p = head;
	for(int j = 0; j < i; j++)
	{
		p = p->next;
	}
	return p->data;
}

template<typename elemType>
void sLinkList<elemType>::insert(int i, const elemType &x)
{
	node *pos;
	pos = find(i - 1);
	pos->next = new node(x, pos->next);
	currentLength++;
}

template<typename elemType>
void sLinkList<elemType>::remove(int i)
{
	node *pos, *delp;
	pos = find(i - 1);
	delp = pos->next;
	pos->next = delp->next;
	delete delp;
	currentLength--;
}

template<typename elemType>
void sLinkList<elemType>::clear()
{
	node *p = head->next;
	head->next = nullptr;
	
	while(p != nullptr)
	{
		node *q = p->next;
		delete p;
		p = q;
	}
	currentLength = 0;
}


