#include <stdio.h>

#define MAXSIZE 10 //存储数据元素的最大个数
struct QNode
{
	float Data[MAXSIZE]; //顺序存储数组实现
	int rear;            //队列的尾
	int front;           //队列的头
};
typedef struct QNode* Queue;