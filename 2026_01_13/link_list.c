#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef int SLTDateType;
typedef struct SListNode
{
	SLTDateType data;
	struct SListNode* next;
}SListNode;

SListNode* BuySListNode(SLTDateType x)
{
	SListNode* newNode = (SLTDateType)malloc(sizeof(SLTDateType));
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}

void SListPrint(SListNode* plist)
{
	SListNode* pcur = plist;
	while (pcur)
	{
		printf("%d->", pcur->data);
		pcur->next;
	}
	printf("NULL");
}

void SListPushBack(SListNode** plist, SLTDateType x)
{
	SListNode* newNode = BuySListNode(x);
	if(plist == NULL)
		*plist = newNode;
	else
	{
		SListNode* ptail = *plist;
		while (ptail->next)
			ptail = ptail->next;
		ptail->data = newNode;
	}
}

void SListPushFront(SListNode** plist, SLTDateType x)
{
	SListNode* newNode = BuySListNode(x);
	newNode->next = plist;
	plist = newNode;
}

void SListPopBack(SListNode** plist)
{
	if((*plist)->next == NULL)
	{
		free(*plist);
		*plist = NULL;
	}
	else
	{
		SListNode* prev = NULL;
		SListNode* ptail = *plist;
		//先找到最后一个节点
		while (ptail->next)
		{
			prev = ptail;
			ptail = ptail->next;
		}
		prev->next = NULL;
		free(ptail);
		ptail = NULL;
	}
}

void SListPopFront(SListNode** plist)
{
	
}

SListNode* SListFind(SListNode* plist)
{

}

void SListInsertAfter(SListNode* pos, SLTDateType x)
{

}

void SListEraseAfter(SListNode* pos)
{

}