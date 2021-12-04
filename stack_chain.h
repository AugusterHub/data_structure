#include <stdio.h>
typedef struct SNode* Stack;
struct SNode
{
	float Data;
	struct SNode* Next;
};