#include "stack_chain.h"
/*******************************************
*    //ʵ�����ݽṹջ�Ļ���������LIFO��ջ����ʽ�洢����ջ
*    // author: Auguster
*    // time: 2021.12.4
********************************************/
/*����һ����ջ��ͷ��㣬����ָ��*/
Stack CreateStack() 
{
	Stack S;
	S = (Stack)malloc(sizeof(struct SNode));
	S->Next = NULL;
	return S;
}

/*�ж϶�ջs�Ƿ�Ϊ�գ���Ϊ�պ�������1�����򷵻�0*/
int IsEmpty(Stack S)
{
	return (S->Next == NULL);
}

/*��Ԫ��itemѹ���ջS*/
void Push(float item, Stack S)
{
	struct SNode *TmpCell;
	TmpCell = (Stack)malloc(sizeof(struct SNode));
	TmpCell->Data = item;
	TmpCell->Next = S->Next;
	S->Next = TmpCell;
}

/*ɾ�������ض�ջ��ջ��Ԫ��*/
float Pop(Stack S) 
{
	struct SNode* FirstCell;
	float TopElem;
	if (IsEmpty(S))
	{
		printf("��ջ��");
		return 0.0; //Ӧ����NULL,��0.0����
	}
	else
	{
		FirstCell = S->Next;
		S->Next = FirstCell->Next;
		TopElem = FirstCell->Data;
		free(FirstCell);
		return TopElem;
	}
}