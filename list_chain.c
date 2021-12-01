/*******************************************
*    //实现数据结构线性表的基本操作(链式存储)
*    // author: Auguster
*    // time: 2021.11.22
********************************************/
#include "list_chain.h"

/*求表长*/
int Length(List PtrL) 
{
	List p = PtrL;
	int j = 0;
	while (p)
	{
		p = p->Next;
		j++;
	}
	return j;
}

/*查找：按序号查找*/
List FindKth(int K, List PtrL)
{
	List p = PtrL;
	int i = 1;
	while (p != NULL && i < K)
	{
		p = p->Next;
		i++;
	}

	if (i == K)
	{
		return p;
	}
	else
	{
		return NULL;
	}
}

/*查找：按值查找*/
List Find(float X, List PtrL)
{
	List p = PtrL;
	while (p != NULL && p->Data != X)
	{
		p = p->Next;
	}
	return p;
}

/*插入， 在第i(1=<i<=n+1)位置上插入新的元素X*/
List Insert(float X, int i, List PtrL) 
{
	List p, s;
	if (i == 1)  //X插入在表头，特殊处理
	{
		s = (List)malloc(sizeof(struct LNode)); //申请内存，填装结点
		s->Data = X;
		s->Next = PtrL;
		return s; //返回新表的头指针
	}

	p = FindKth(i, PtrL);
	if (p == NULL)
	{
		printf("参数i错误");
		return NULL;
	}
	else
	{
		s = (List)malloc(sizeof(struct LNode));
		s->Data = X;
		s->Next = p->Next;
		p->Next = s;
		return PtrL;
	}
}

/*删除， 在第i(1=<i<=n+1)位置上的结点*/
List Delete(int i, List PtrL) 
{
	List p, s;
	if (i == 1)  // 若要删除的是表的第一个结点
	{
		s = PtrL; //s指向第一个结点
		if (PtrL != NULL)
		{
			PtrL = PtrL->Next; //从链表中删除
		}
		else
		{
			return NULL;
		}
		free(s); // 释放被删除结点内存
		return PtrL;
	}

	p = FindKth(i, PtrL);
	if (p == NULL)
	{
		printf("第%d个结点不存在", i-1);
		return NULL;
	}
	else if (p->Next == NULL)
	{
		printf("第%d个结点不存在", i);
		return NULL;
	}
	else
	{
		s = p->Next;
		p->Next = s->Next;
		free(s);
		return PtrL;
	}
}