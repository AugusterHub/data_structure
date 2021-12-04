#include "stack_order.h"
/*******************************************
*    //ʵ�����ݽṹջ�Ļ���������LIFO��ջ��˳��洢
*    // author: Auguster
*    // time: 2021.12.3
********************************************/

/*��ջ����*/
void Push(float X, Stack PtrS)
{
	if (PtrS->Top == MAXSIZE - 1)
	{
		printf("��ջ��");
	}
	else
	{	
		PtrS->Data[++(PtrS->Top)] = X; //������ջ��ָ��+1���������Ԫ��X
	}
	return;
}

/*��ջ����*/
void Pop(Stack PtrS) 
{
	if (PtrS->Top == -1) 
	{
		printf("��ջ��");
	}
	else
	{
		PtrS->Data[(PtrS->Top)--];
	}
	return;
}

/*һ������ʵ��������ջ����ջ*/
void Push_d(struct DStack *PtrS, float X, int tag) //tag��Ϊ����������ջ�ı�־��ȡֵΪ1��2
{
	if (PtrS->Top2 - PtrS->Top1 == 1)
	{
		printf("��ջ��");
		return;
	}

	if (tag == 1) //tag == 1,�Ե�һ����ջ���в���
	{
		PtrS->Data[++(PtrS->Top1)] = X;
	}
	else
	{
		PtrS->Data[--(PtrS->Top2)] = X;
	}
	return;
}
/*һ������ʵ��������ջ����ջ*/
float Pop_d(struct DStack *PtrS, int tag) //tag��Ϊ����������ջ�ı�־��ȡֵΪ1��2
{
	if (tag == 1)
	{
		if (PtrS->Top1 == -1) 
		{
			printf("��ջ1��");
			return 0.0; //Ӧ�÷���NULL,��0.0����
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
			printf("��ջ2��");
			return 0.0; //Ӧ�÷���NULL,��0.0����
		}
		else
		{
			return PtrS->Data[(PtrS->Top2)++];
		}
	}
}