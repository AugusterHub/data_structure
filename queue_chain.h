#include <stdio.h>
struct Node 
{/*链表的结构*/
	float Data;
	struct Node *Next;
};

struct QNode
{/*链队列结构*/
	struct Node *rear;
	struct Node *front;
};
typedef struct QNode *Queue;