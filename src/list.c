#include <stdio.h>
#include <stdlib.h>
#include "../include/list.h"

 List* createList() {
	List* newList = malloc(sizeof(List));
	if (newList != NULL) {
		newList->size = 0;
		newList->head = NULL;
		newList->tail = NULL;
	}
	return newList;
}

ListNode* createNode(int value) {
	ListNode* newNode = malloc(sizeof(ListNode));
	if (newNode != NULL) {
		newNode->value = value;
		newNode->next = NULL;
	}

	return newNode;
}

int insertHead(List* list, ListNode** head, int value) {
	if (list == NULL) {
		return -1;
	}	

	if (head == NULL) {
		return -1;
	}

	if (list->size == 0) {
		list->size++;
		list->head = head;
		list->tail = head;
	}

	if (list->size > 0) {
		head->next = list->head->next;
		list->head = head;
	}
}
