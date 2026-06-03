#include<iostream>
using namespace std;

template<typename elemType>
class binaryTree
{
public:
	virtual void clear() = 0;  // 清空树
	virtual bool isEmpty() const = 0;  // 判空
	
	virtual elemType getRoot(elemType flag) const = 0;  // 返回树的根节点的值, 不存在返回特殊值flag
	virtual elemType parent(elemType x, elemType flag) const = 0;  // 返回结点x的父节点的值, 不存在返回特殊值flag
	virtual elemType lchild(elemType x, elemType flag) const = 0;  // 返回结点x左子节点的值, 不存在返回特殊值flag
	virtual elemType rchild(elemType x, elemType flag) const = 0;  // 返回结点x右子节点的值, 不存在返回特殊值flag
	
	virtual void leftRemove(elemType x, int i) = 0;  // 删除结点x的左子树
	virtual void ringhtRemove(elemType x, int i) = 0;  // 删除结点x的又子树
	
	virtual void preOrder() const = 0;  // 前序遍历
	virtual void midOrder() const = 0;  // 中序遍历
	virtual void postOrder() const = 0;  // 后序遍历
	virtual void levelOrder() const = 0;  // 层次遍历
	
	virtual ~binaryTree();
};
