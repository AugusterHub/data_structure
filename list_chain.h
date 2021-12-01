#include <stdio.h>
#include <stdlib.h>

/*线性表链式存储的数据结构（单向链表）*/
typedef struct LNode *List;
struct LNode 
{
	float Data; //数据
	List Next; //后继元素的地址
};
struct LNode L;
List PtrL;