#ifndef LIST_H
#define LIST_H

struct ListNode {
	int data;
	struct ListNode* next;
};

struct ListNode* createNote(int data);
struct ListNode* findNode(struct ListNode* node, int value);
void insertHead(struct ListNode** head, int value);
void insertTail(struct ListNode** tail, int value);
void removeNode(struct ListNode** node, int value);
int getValue(struct ListNode* node, int value);



#endif
