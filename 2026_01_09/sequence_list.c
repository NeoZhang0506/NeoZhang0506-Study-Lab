#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>



//定义一个动态顺序表,链式存储,假设存储数据结构类型为 int 
typedef struct SeqList
{
	int* data;
	int size;
	int capacity;
}Seqlist;

void SeqListInit(Seqlist* ps)
{
	ps->data = NULL;
	ps->capacity = 0;
	ps->size = 0;
}

void SeqListDestroy(Seqlist* ps)
{
	if(ps->data != NULL)
		free(ps);
	ps ->capacity = 0;
	ps ->size = 0;
}

void SeqListPrint(Seqlist* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		int data = ps->data[i];
		printf("%d ", data);
	}
}

void SeqListPushBack(Seqlist* ps, int e)
{
	if(ps->capacity < ps->size)  //先对顺序表进行扩容
	{
		int new_capacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		int* tmp = realloc(ps->data, new_capacity);
		ps->data = tmp;
		ps->capacity = new_capacity;
	}

	ps->data[ps->size-1] = e;
	ps->size++;
} 

void SeqListPushFront(Seqlist* ps, int e)
{
	if (ps->capacity <= ps->size)
	{
		int new_capacity = ps->capacity ==  0 ? 4 : 2 * ps->capacity;
		int* tmp = (int*)realloc(ps->data, new_capacity * sizeof(int));
		ps->data = tmp;
		ps->capacity = new_capacity;
	}
	for (int i = 0; i <= ps->size; i++)
	{
		ps->data[i+1] = ps->data[i];
	}
	ps->data[0] = e;
	ps->size;
}

void SeqListPopFront(Seqlist* ps)
{
	ps->size--;
}

void SeqListPopBack(Seqlist* ps)
{
	for (int i = 0; i < ps->size - 1; i++)
	{
		ps->data[i] = ps->data[i+1];
	}
	ps->size--;
}

void SeqListInsert(Seqlist* ps, int pos, int x)
{
	if (ps->capacity <= ps->size)
	{
		int new_capacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		int* tmp = (int*)realloc(ps->data, new_capacity * sizeof(int));
		ps->data = tmp;
		ps->capacity = new_capacity;
	}
	for(int i = pos - 1; i < ps->size; i++)
	{
		ps->data[i+1] = ps->data[i];
	}
	ps->data[pos-1] = x;
	ps->size++;
}

void SeqListErase(Seqlist* ps, int pos)
{
	for (int i = pos - 1; i < ps->size; i++)
	{
		ps->data[i] = ps->data[i+1];
	}
	ps->size;
}

void test1();
int main()
{
	test1();

	return 0;
}

void test1()
{
	Seqlist L;
	SeqListInit(&L);
	int input = 0; 
	while (1)
	{
		scanf("%d", &input);
		if(input == 0)
			break;
		SeqListPushBack(&L, input);
		SeqListPrint(&L);
	}
}