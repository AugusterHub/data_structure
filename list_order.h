#include <stdio.h>
#include <stdlib.h>

/*线性表顺序存储的数据结构*/
#define MAXSIZE 10
typedef struct LNode *List;
struct LNode
{
	float Data[MAXSIZE]; //元素用数组存放
	int Last; //代表线性表的最后一个元素
};
struct LNode L;
List PtrL;