/*******************************************
*    //ʵ�����ݽṹ���Ա�Ļ�������(��ʽ�洢)
*    // author: Auguster
*    // time: 2021.11.22
********************************************/
#include "list_chain.h"

/*���*/
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

/*���ң�����Ų���*/
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

/*���ң���ֵ����*/
List Find(float X, List PtrL)
{
	List p = PtrL;
	while (p != NULL && p->Data != X)
	{
		p = p->Next;
	}
	return p;
}

/*���룬 �ڵ�i(1=<i<=n+1)λ���ϲ����µ�Ԫ��X*/
List Insert(float X, int i, List PtrL) 
{
	List p, s;
	if (i == 1)  //X�����ڱ�ͷ�����⴦��
	{
		s = (List)malloc(sizeof(struct LNode)); //�����ڴ棬��װ���
		s->Data = X;
		s->Next = PtrL;
		return s; //�����±��ͷָ��
	}

	p = FindKth(i, PtrL);
	if (p == NULL)
	{
		printf("����i����");
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

/*ɾ���� �ڵ�i(1=<i<=n+1)λ���ϵĽ��*/
List Delete(int i, List PtrL) 
{
	List p, s;
	if (i == 1)  // ��Ҫɾ�����Ǳ�ĵ�һ�����
	{
		s = PtrL; //sָ���һ�����
		if (PtrL != NULL)
		{
			PtrL = PtrL->Next; //��������ɾ��
		}
		else
		{
			return NULL;
		}
		free(s); // �ͷű�ɾ������ڴ�
		return PtrL;
	}

	p = FindKth(i, PtrL);
	if (p == NULL)
	{
		printf("��%d����㲻����", i-1);
		return NULL;
	}
	else if (p->Next == NULL)
	{
		printf("��%d����㲻����", i);
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