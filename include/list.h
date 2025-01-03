#ifndef LIST_H
#define LIST_H

typedef struct ListNode {
	int value;
	struct ListNode* next;
}ListNode;

typedef struct List {
	ListNode* tail;
	ListNode* head;
	int size;
}List;

List* createList();
ListNode* createNode(int value);
ListNode* findNode(ListNode* node, int value);
void insertHead(List* list, ListNode** head, int value);
void insertTail(ListNode** tail, int value);
void removeNode(ListNode** node, int value);
int getValue(ListNode* node, int value);

#endif
