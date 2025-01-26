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
int deleteList();
ListNode* createNode(int value);
ListNode* findNode(List* list, int value);
int insertHead(List* list, ListNode* head);
int insertTail(List* list, ListNode* tail);
int insertNode(List* list, ListNode* node, int position);
int removeNode(List* list, int position);
int getValue(ListNode* node);
ListNode* getHead(List* list);
ListNode* getTail(List* list);
int printList(List* list);
int getSize(List* list);


// delete list
#endif
