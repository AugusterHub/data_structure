/*******************************************
*    //实现数据结构线性表的基本操作(顺序存储)
*    // author: Auguster
*    // time: 2021.11.22
********************************************/
#include "list_order.h"

/*初始化，建立空的顺序表*/
List MakeEmpty()
{	
	List PtrL;
	PtrL = (List)malloc(sizeof(struct LNode));
	PtrL->Last = -1;
	return PtrL;
}

/*查找x，并返回所在的位置i*/
int find(float x, List PtrL)
{
	int i = 0;
	while (i <= PtrL->Last && PtrL->Data[i] != x)
	{
		i++;
	}

	if (i > PtrL->Last) //跳出循环两种情况，没找到x，此时 i>PtrL->Last, 另一种就是找到了直接返回位置i
	{
		return -1;
	}
	else
	{
		return i;
	}
}

/*插入，在第i(1=<i<=n+1)位置上插入新的元素x*/
void insert(float x, int i, List PtrL)
{
	if (PtrL->Last == MAXSIZE - 1)              // 表满，不能插入
	{
		printf("线性表已满");
		return;
	}

	if (i < 1 || i > PtrL->Last + 2)           // 检查插入位置
	{
		printf("位置不合法");
		return;
	}

	for (int j = PtrL->Last; j >= i - 1; j--) //将i-1后面的元素后移一位，！！！倒序移动，从最后一个往外移动
	{
		PtrL->Data[j + 1] = PtrL->Data[j];
	}

	PtrL->Data[i - 1] = x;                   //新元素插入
	PtrL->Last++;                            // *Last 指向最后一个元素
	return;
}

/*删除，在第i(1=<i<=n+1)位置元素x*/
void Delete(int i, List PtrL) 
{
	if (i < 1 || i > PtrL->Last + 1)        //检查删除操作的合法性
	{
		printf("不存在第%d个元素", i);
		return;
	}

	for (int j = i; j < PtrL->Last; j++)    //将数据前移
	{
		PtrL->Data[j - 1] = PtrL->Data[j];
	}
	PtrL->Last--;                           //*Last指向最后一个元素
	return;
}