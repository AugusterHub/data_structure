/*******************************************
*    //ʵ�����ݽṹ���Ա�Ļ�������(˳��洢)
*    // author: Auguster
*    // time: 2021.11.22
********************************************/
#include "list_order.h"

/*��ʼ���������յ�˳���*/
List MakeEmpty()
{	
	List PtrL;
	PtrL = (List)malloc(sizeof(struct LNode));
	PtrL->Last = -1;
	return PtrL;
}

/*����x�����������ڵ�λ��i*/
int find(float x, List PtrL)
{
	int i = 0;
	while (i <= PtrL->Last && PtrL->Data[i] != x)
	{
		i++;
	}

	if (i > PtrL->Last) //����ѭ�����������û�ҵ�x����ʱ i>PtrL->Last, ��һ�־����ҵ���ֱ�ӷ���λ��i
	{
		return -1;
	}
	else
	{
		return i;
	}
}

/*���룬�ڵ�i(1=<i<=n+1)λ���ϲ����µ�Ԫ��x*/
void insert(float x, int i, List PtrL)
{
	if (PtrL->Last == MAXSIZE - 1)              // ���������ܲ���
	{
		printf("���Ա�����");
		return;
	}

	if (i < 1 || i > PtrL->Last + 2)           // ������λ��
	{
		printf("λ�ò��Ϸ�");
		return;
	}

	for (int j = PtrL->Last; j >= i - 1; j--) //��i-1�����Ԫ�غ���һλ�������������ƶ��������һ�������ƶ�
	{
		PtrL->Data[j + 1] = PtrL->Data[j];
	}

	PtrL->Data[i - 1] = x;                   //��Ԫ�ز���
	PtrL->Last++;                            // *Last ָ�����һ��Ԫ��
	return;
}

/*ɾ�����ڵ�i(1=<i<=n+1)λ��Ԫ��x*/
void Delete(int i, List PtrL) 
{
	if (i < 1 || i > PtrL->Last + 1)        //���ɾ�������ĺϷ���
	{
		printf("�����ڵ�%d��Ԫ��", i);
		return;
	}

	for (int j = i; j < PtrL->Last; j++)    //������ǰ��
	{
		PtrL->Data[j - 1] = PtrL->Data[j];
	}
	PtrL->Last--;                           //*Lastָ�����һ��Ԫ��
	return;
}