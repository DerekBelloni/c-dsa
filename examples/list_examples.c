#include <stdio.h>
#include "../include/list.h"

int main() {
	// create an empty list structure
	List* newList = createList();
	printf("List size: %i\n", newList->size);
	ListNode* newNode = createNode(5);
	printf("List Node Value: %i\n", newNode->value);
	return 0;
}
