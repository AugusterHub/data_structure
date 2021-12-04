#include <stdio.h>

/*单个数组实现栈操作*/
#define MAXSIZE 10 //栈元素个数
typedef struct SNode* Stack;
struct SNode
{
	float Data[MAXSIZE];
	int	Top; //栈顶指针
};

/*一个数组实现两个堆栈，最大的利用数组空间*/
struct DStack
{
	float Data[MAXSIZE];
	int Top1; //堆栈1的栈顶指针
	int Top2; //堆栈2的栈顶指针
};