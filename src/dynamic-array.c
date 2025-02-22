#include <stdio.h>
#include <stdlib.h>
#include "../include/dynamic-array.h"

DynamicArray* initializeArr() {
	int numItems;
	printf("Please provide the number of items needed to initialize the array\n");
	scanf("%i", &numItems);

	DynamicArray* newArr = malloc(sizeof(DynamicArray));

	if (newArr == NULL) {
		return NULL;
	}

	newArr->data = (int*)malloc(numItems * sizeof(int));
	newArr->size = 0;
	newArr->capacity = numItems;

	if (newArr->data == NULL) {
		free(newArr);
		return NULL;
	}

	return newArr;
}

int append(int value) {
	
}
