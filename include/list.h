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
int insertHead(List* list, ListNode* head);
int insertTail(List* list, ListNode* tail);
void removeNode(int value);
int getValue(ListNode* node);
ListNode* getHead(List* list);
ListNode* getTail(List* list);
int printList(List* list);

// add methods for:
// get size
// delete list
#endif
