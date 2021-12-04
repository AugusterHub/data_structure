#include "stack_chain.h"
/*******************************************
*    //实现数据结构栈的基本操作（LIFO）栈的链式存储，链栈
*    // author: Auguster
*    // time: 2021.12.4
********************************************/
/*构建一个堆栈的头结点，返回指针*/
Stack CreateStack() 
{
	Stack S;
	S = (Stack)malloc(sizeof(struct SNode));
	S->Next = NULL;
	return S;
}

/*判断堆栈s是否为空，若为空函数返回1，否则返回0*/
int IsEmpty(Stack S)
{
	return (S->Next == NULL);
}

/*将元素item压入堆栈S*/
void Push(float item, Stack S)
{
	struct SNode *TmpCell;
	TmpCell = (Stack)malloc(sizeof(struct SNode));
	TmpCell->Data = item;
	TmpCell->Next = S->Next;
	S->Next = TmpCell;
}

/*删除并返回堆栈的栈顶元素*/
float Pop(Stack S) 
{
	struct SNode* FirstCell;
	float TopElem;
	if (IsEmpty(S))
	{
		printf("堆栈空");
		return 0.0; //应返回NULL,用0.0代替
	}
	else
	{
		FirstCell = S->Next;
		S->Next = FirstCell->Next;
		TopElem = FirstCell->Data;
		free(FirstCell);
		return TopElem;
	}
}