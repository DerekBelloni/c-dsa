#ifndef LIST_H
#define LIST_H

struct ListNode {
	int data;
	struct ListNode* next;
};

struct ListNode* createNote(int data);
int findNode(struct ListNode*, int value);

#endif
