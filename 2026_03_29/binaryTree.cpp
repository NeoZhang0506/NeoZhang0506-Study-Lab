#include"binaryTree.h"

template<typename elemType>
class linkBinaryTree : public binaryTree<elemType> {
public:
	linkBinaryTree(): root(nullptr) {}
	linkBinaryTree(elemType x){root = new node(x);}
	~linkBinaryTree();
	void clear(linkBinaryTree::node *&t);
	void createTree(elemType flag);
	bool isEmpty() const;
	elemType getRoot(elemType flag) const;
	elemType lchild(elemType x, elemType flag) const;
	elemType rchild(elemType x, elemType flag) const;
	
	virtual void preOrder() const = 0;  // 前序遍历
	virtual void midOrder() const = 0;  // 中序遍历
	virtual void postOrder() const = 0;  // 后序遍历
	virtual void levelOrder() const = 0;  // 层次遍历
	
	// 一般不在二叉链表中找父节点, 因此标准操作中的找父节点的操作直接返回空值, 不做额外的查找
	elemType parent(elemType x, elemType flag) const {return flag;}
private:
	struct node {
		node *left, *right;
		elemType data;
		node(): left(nullptr), right(nullptr) {}
		node(elemType item, node *L = nullptr, node *R = nullptr)
			: data(item), left(L), right(R) {}
		~node() {}
	};
	node *root;  // 二叉树的根节点
};

template<typename elemType>
elemType linkBinaryTree<elemType>::getRoot(elemType flag) const
{	
	if(root == nullptr)
		return flag;
	else
		return root->data;
}

template<typename elemType>
bool linkBinaryTree<elemType>::isEmpty() const
{
	return root==nullptr;
}

template<typename elemType>
void linkBinaryTree<elemType>::clear(linkBinaryTree::node *&t) {
	if (t == nullptr) {
		return;
	}
	
	// 1. 递归清空左子树
	clear(t->left);
	
	// 2. 递归清空右子树
	clear(t->right);
	
	// 3. 删除当前节点
	delete t;
	
	// 4. 将当前指针置为 nullptr (防止悬空指针)
	t = nullptr;
}
