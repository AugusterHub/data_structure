#include "queue_order.h"
/*******************************************
*    //ʵ�����ݽṹ���еĻ�������(˳��洢)
*    // author: Auguster
*    // time: 2021.12.4
********************************************/

/*����У�ѭ�����У�*/
void AddQ(Queue PtrQ, float x)
{
	if ((PtrQ->rear + 1) % MAXSIZE == PtrQ->front)
	{
		prinf("������");
		return;
	}
	else
	{
		PtrQ->rear = (PtrQ->rear + 1) % MAXSIZE;
		PtrQ->Data[PtrQ->rear] = x;
	}
}

/*�����У�ѭ�����У�*/
float DeleteQ(Queue PtrQ)
{
	if (PtrQ->rear == PtrQ->front)
	{
		printf("���п�");
		return 0.0; //Ӧ�÷���error
	}
	else
	{
		PtrQ->front = (PtrQ->front + 1) % MAXSIZE;
		return PtrQ->Data[PtrQ->front];
	}
}
