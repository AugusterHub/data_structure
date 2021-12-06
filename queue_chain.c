#include "queue_chain.h"
/*******************************************
*    //实现数据结构队列的基本操作(链式存储)
*    // author: Auguster
*    // time: 2021.12.4
********************************************/
/*不带头结点的链式队列出队操作*/
float DeleteQ(Queue PtrQ)
{
	struct Node *FrontCell;
	float FrontElem;

	if (PtrQ->front == NULL)
	{
		printf("队列空");
		return 0.0; //应该返回ERROR
	}


	if (PtrQ->front == PtrQ->rear) /*若队列只有一个元素*/
	{
		PtrQ->front = PtrQ->rear = NULL; /*删除后队列置为空*/
	}
	else
	{
		PtrQ->front = PtrQ->front->Next;
	}
	FrontElem = PtrQ->front->Data;
	FrontCell = PtrQ->front;
	free(FrontCell);
	return FrontElem;
}