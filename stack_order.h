#include <stdio.h>

/*��������ʵ��ջ����*/
#define MAXSIZE 10 //ջԪ�ظ���
typedef struct SNode* Stack;
struct SNode
{
	float Data[MAXSIZE];
	int	Top; //ջ��ָ��
};

/*һ������ʵ��������ջ��������������ռ�*/
struct DStack
{
	float Data[MAXSIZE];
	int Top1; //��ջ1��ջ��ָ��
	int Top2; //��ջ2��ջ��ָ��
};