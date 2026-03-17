#include<iostream>
using namespace std;
template<typename elemType>
class tree
{
public:
	virtual void clear() = 0;  // 清空树
	virtual bool isEmpty() const = 0;  // 判空
	virtual elemType getRoot(elemType flag) const = 0;  // 返回树的根节点的值, 不存在返回特殊值flag
	virtual elemType parent(elemType x, elemType flag) const = 0;  // 返回结点x的父节点的值, 不存在返回特殊值flag
	virtual elemType child(elemType x,int i, elemType flag) const = 0;  // 返回结点x第i个子节点的值, 不存在返回特殊值flag
	virtual void remove(elemType x, int i) = 0;  // 删除结点x的第i棵子树
	virtual void traverse() const = 0;  // 访问树的每个结点
	virtual ~tree();
};


