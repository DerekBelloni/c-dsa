#include <stdio.h>
#include "../include/list.h"

int main() {
	// create an empty list structure
	List* newList = createList();
	printf("List size: %i\n", newList->size);

	ListNode* newNode = createNode(5);
	printf("List Node Value: %i\n", newNode->value);
	
	insertHead(newList, newNode);
	
	ListNode* head = getHead(newList);
	printf("List Head Value: %i\n", head->value);
	
	// create tail node
	ListNode* tailNode = createNode(12);
	printf("Tail Node Value: %i\n", tailNode->value);
	
	insertTail(newList, tailNode);

	ListNode* tail = getTail(newList);
	printf("List Tail Value: %i\n", tail->value);

	ListNode* tailNode2 = createNode(27);
	ListNode* tailNode3 = createNode(42);
	insertTail(newList, tailNode2);
	insertTail(newList, tailNode3);
	printList(newList);
	
	ListNode* foundNode = findNode(newList, 12);
	printf("Found Node for Value 12: %d", foundNode->value);


	return 0;
}
