#include <stdio.h>

#define MAXSIZE 10 //�洢����Ԫ�ص�������
struct QNode
{
	float Data[MAXSIZE]; //˳��洢����ʵ��
	int rear;            //���е�β
	int front;           //���е�ͷ
};
typedef struct QNode* Queue;