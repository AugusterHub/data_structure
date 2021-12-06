#include "queue_chain.h"
/*******************************************
*    //ʵ�����ݽṹ���еĻ�������(��ʽ�洢)
*    // author: Auguster
*    // time: 2021.12.4
********************************************/
/*����ͷ������ʽ���г��Ӳ���*/
float DeleteQ(Queue PtrQ)
{
	struct Node *FrontCell;
	float FrontElem;

	if (PtrQ->front == NULL)
	{
		printf("���п�");
		return 0.0; //Ӧ�÷���ERROR
	}


	if (PtrQ->front == PtrQ->rear) /*������ֻ��һ��Ԫ��*/
	{
		PtrQ->front = PtrQ->rear = NULL; /*ɾ���������Ϊ��*/
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