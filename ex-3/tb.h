#ifndef tb_h
#define tb_h
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef int dataType;
typedef struct LinkStack {
	dataType data;
	struct LinkStack *next;
} LinkStack;

//初始化链栈为空栈
LinkStack *InitStack();

//判断栈是否为空
int Empty(LinkStack *s);

//元素x进栈
 void Push(LinkStack *s,dataType x);

//出栈
void Pop(LinkStack *s);

//取栈顶元素的值
dataType GetTop(LinkStack *s);

#endif

