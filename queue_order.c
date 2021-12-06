#include "queue_order.h"
/*******************************************
*    //实现数据结构队列的基本操作(顺序存储)
*    // author: Auguster
*    // time: 2021.12.4
********************************************/

/*入队列（循环队列）*/
void AddQ(Queue PtrQ, float x)
{
	if ((PtrQ->rear + 1) % MAXSIZE == PtrQ->front)
	{
		prinf("队列满");
		return;
	}
	else
	{
		PtrQ->rear = (PtrQ->rear + 1) % MAXSIZE;
		PtrQ->Data[PtrQ->rear] = x;
	}
}

/*出队列（循环队列）*/
float DeleteQ(Queue PtrQ)
{
	if (PtrQ->rear == PtrQ->front)
	{
		printf("队列空");
		return 0.0; //应该返回error
	}
	else
	{
		PtrQ->front = (PtrQ->front + 1) % MAXSIZE;
		return PtrQ->Data[PtrQ->front];
	}
}
