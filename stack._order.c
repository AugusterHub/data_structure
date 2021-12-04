#include "stack_order.h"
/*******************************************
*    //实现数据结构栈的基本操作（LIFO）栈的顺序存储
*    // author: Auguster
*    // time: 2021.12.3
********************************************/

/*入栈操作*/
void Push(float X, Stack PtrS)
{
	if (PtrS->Top == MAXSIZE - 1)
	{
		printf("堆栈满");
	}
	else
	{	
		PtrS->Data[++(PtrS->Top)] = X; //两步，栈顶指针+1；数组加入元素X
	}
	return;
}

/*出栈操作*/
void Pop(Stack PtrS) 
{
	if (PtrS->Top == -1) 
	{
		printf("堆栈空");
	}
	else
	{
		PtrS->Data[(PtrS->Top)--];
	}
	return;
}

/*一个数组实现两个堆栈，入栈*/
void Push_d(struct DStack *PtrS, float X, int tag) //tag作为区分两个堆栈的标志，取值为1和2
{
	if (PtrS->Top2 - PtrS->Top1 == 1)
	{
		printf("堆栈满");
		return;
	}

	if (tag == 1) //tag == 1,对第一个堆栈进行操作
	{
		PtrS->Data[++(PtrS->Top1)] = X;
	}
	else
	{
		PtrS->Data[--(PtrS->Top2)] = X;
	}
	return;
}
/*一个数组实现两个堆栈，出栈*/
float Pop_d(struct DStack *PtrS, int tag) //tag作为区分两个堆栈的标志，取值为1和2
{
	if (tag == 1)
	{
		if (PtrS->Top1 == -1) 
		{
			printf("堆栈1空");
			return 0.0; //应该返回NULL,以0.0代替
		}
		else
		{
			return PtrS->Data[(PtrS->Top1)--];
		}
	}
	else
	{
		if (PtrS->Top2 == MAXSIZE)
		{
			printf("堆栈2空");
			return 0.0; //应该返回NULL,以0.0代替
		}
		else
		{
			return PtrS->Data[(PtrS->Top2)++];
		}
	}
}