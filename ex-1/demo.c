#include <stdio.h>
#include <stdlib.h>
#include "demo.h"


//创建链表
LinkList* CreateList() {
	LinkList *head;
	head = (LinkList*)malloc(sizeof(LinkList));
	head->next = NULL;
	return head;
}	

//求链表的元素个数
int Size(LinkList *list){
	LinkList *p = list->next;
	int k = 0;
	while (p) {
		k++;
		p = p->next;
	}
	return k;
}	

//在链表l的第k个位置插入元素x
void Insert(LinkList *list, int k, dataType x) {
	if (k<1) exit(1);
	LinkList *p = list;
	int i = 0;
	while(p && i<k-1) {
		p = p->next;
		i++;
	}
	if(!p) exit(1);
	LinkList *s = (LinkList*)malloc(sizeof(LinkList));
	s->data = x;
	s->next = p->next;
	p->next = s;
}

//删除链表l的第k个元素
void Delete(LinkList *list, int k) {
	if (k<1) exit(1);
	LinkList *p = list;
	int i = 0;
	while (p->next && i<k-1) {
		p = p->next;
		i++;
	}
	if (p->next==NULL) exit(1);
	LinkList *q = p->next;
	p->next = q->next;
	free(q);
}

//判断链表是否为空
int Empty(LinkList *list) {
	return list->next == NULL;
}

//求链表l的第k个元素的值
dataType GetData(LinkList *list, int k) {
	if (k<1) exit(1);
	LinkList *p = list;
	int i = 0;
	while (p && i<k) {
		p = p->next;
		i++;
	}
	if (!p) exit(1);
	return p->data;
}

//在链表l中查找值为x的元素
LinkList  *Find(LinkList *list, dataType x) {
	LinkList *p = list->next;
	while (p && p->data!=x)
		p = p->next;
	return p;
}

//输出链表
void Print(LinkList *list) {
	LinkList *p = list->next;
	while (p) {
		printf("%d\n", p->data);
		p = p->next;
	}
	printf("\n");
}

//清空链表
void ClearList(LinkList *list) {
LinkList *p, *q;
	p = list->next;
	while (p) {
		q = p;
		p = p->next;
		free(q);
	}
	list->next = NULL;
}



	





	


	
