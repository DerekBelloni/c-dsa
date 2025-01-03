#ifndef LIST_H
#define LIST_H

typedef struct ListNode {
	int data;
	struct ListNode* next;
}ListNode;

typedef struct List {
	struct ListNode* tail;
	struct ListNode* head;
	int size;
}List;

struct List* createList();
struct ListNode* createNote(int data);
struct ListNode* findNode(struct ListNode* node, int value);
void insertHead(struct ListNode** head, int value);
void insertTail(struct ListNode** tail, int value);
void removeNode(struct ListNode** node, int value);
int getValue(struct ListNode* node, int value);

#endif
