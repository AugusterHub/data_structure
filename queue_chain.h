#include <stdio.h>
struct Node 
{/*����Ľṹ*/
	float Data;
	struct Node *Next;
};

struct QNode
{/*�����нṹ*/
	struct Node *rear;
	struct Node *front;
};
typedef struct QNode *Queue;