#include <stdio.h>
#include <stdlib.h>

/*���Ա���ʽ�洢�����ݽṹ����������*/
typedef struct LNode *List;
struct LNode 
{
	float Data; //����
	List Next; //���Ԫ�صĵ�ַ
};
struct LNode L;
List PtrL;