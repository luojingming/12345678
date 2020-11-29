#include "demo.h"

int main() {
	LinkList *list = CreateList();
	Insert(list, 1, 10);
	Insert(list, 1, 20);
	Delete(list, 2);
	Insert(list, 1, 30);
	Insert(list, 1, 40);
	printf("链表的元素个数为: %d\n", Size(list));
	Print(list);
	printf("链表的第二个元素为: %d", GetData(list,2));
	printf("\n");
	return 0;
        }
