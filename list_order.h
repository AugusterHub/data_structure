#include <stdio.h>
#include <stdlib.h>

/*���Ա�˳��洢�����ݽṹ*/
#define MAXSIZE 10
typedef struct LNode *List;
struct LNode
{
	float Data[MAXSIZE]; //Ԫ����������
	int Last; //�������Ա�����һ��Ԫ��
};
struct LNode L;
List PtrL;