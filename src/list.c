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

int insertHead(List* list, ListNode* head) {
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
		head->next = NULL;
	} else {
		list->size++;
		head->next = list->head;
		list->head = head;
	}

	return 0;
}

int insertTail(List* list, ListNode* tail) {
	if (list == NULL) {
		return -1;
	}

	if (tail == NULL) {
		return -1;
	}

	if (list->size == 0) {
		list->size++;
		list->tail = tail;
		list->head = tail;
		tail->next = NULL;
	} else {
		list->size++;
		list->tail->next = tail;
		list->tail = tail;
	}

	return 0;
} 

ListNode* findNode(List* list, int value) {
	ListNode* curr = list->head;

	while(curr) {
		if (curr->value == value) {
			return curr;
		} else {
			curr = curr->next;
		}
	}
	return NULL;
}

int removeNode(List* list, int position) {
	ListNode* temp = list->head;
	ListNode* prev = NULL;

	if (position == 1) {
		int headValue = list->head->value;
		list->head = temp->next;
		free(temp);
		return headValue;
	}

	for (int i = 1; i < position && temp != NULL; i++) {
		prev = temp;
		temp = temp->next;
	}

	if (temp != NULL) {
		int foundValue = temp->value;
		prev->next = temp->next;
		free(temp);
		return foundValue;
	}


	return 0;
}

ListNode* getHead(List* list) {
	if (list == NULL) return NULL;

	ListNode* head = list->head;
	return head;
}

ListNode* getTail(List* list) {
	if (list == NULL) return NULL;

	ListNode* tail = list->tail;
	return tail;
}

int printList(List* list) {
	if (list == NULL) return -1;

	ListNode* curr = list->head;
	
	while(curr) {
		printf("Current node value: %i\n", curr->value);
		curr = curr->next;
	}

	return 0;
}

int getSize(List* list) {
	if (list == NULL) return 0;

	int size = 0;
	ListNode* curr = list->head;
	
	while (curr) {
		size++;
		curr = curr->next;
	}

	return size;
}


int insertNode(List* list, ListNode* node, int position) {
	if (list == NULL) return 0;

	ListNode* newNode = node;
	ListNode* curr = list->head;
	ListNode* prev = NULL;

	if (position <= 0 || position > list->size + 1) {
		return 0;
	}

	if (position == 1) {
		newNode->next = list->head;
		list->head = newNode;
		list->size++;
		return 1;	
	}

	for (int i = 1; i < position; i++) {
		prev = curr;
		curr = curr->next;
	}

	prev->next = newNode;
	newNode->next = curr;
	list->size++;
	if (curr == NULL) {
		list->tail = newNode;
	}
	return 1;
}


int deleteList(List* list) {
	if (list == NULL) return 0;

	ListNode* curr = list->head;
	ListNode* next = NULL;
	
	if (list->size == 1) {
		list->head = NULL;
		list->tail = NULL;
		list->size = 0;
		free(curr);
		free(list);
		return 0;
	}

	while (curr) {
		next = curr->next;
		free(curr);
		curr = next;
	}
	
	list->head = NULL;
	list->tail = NULL;
	list->size = 0;
	free(list);
	return 0;
}
