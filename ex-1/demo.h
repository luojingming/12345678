#ifndef demo_h
#define demo_h
#include <stdio.h>
#include <stdlib.h>
typedef int dataType;
typedef struct node {
	dataType data;
	struct node *next;
} LinkList;

LinkList* CreateList();
int Size(LinkList *list);
void Insert(LinkList *list,int k, dataType x);
void Delete(LinkList *list, int k);
int Empty(LinkList *list);
dataType GetData(LinkList *list, int k);
LinkList* Find(LinkList *list, dataType x);
void Print(LinkList *list);
void ClearList (LinkList *list);
#endif
