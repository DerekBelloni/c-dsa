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
