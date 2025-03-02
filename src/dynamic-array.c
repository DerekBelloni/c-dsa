#include <stdio.h>
#include <stdlib.h>
#include "../include/dynamic-array.h"

DynamicArray* initializeArr(int numItems) {
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

int append(DynamicArray* newArr, int value) {
	if (newArr == NULL) {
		return -1;
	}

	if (value == EMPTY_VALUE) {
		return -1;
	}

	if (newArr->size == newArr->capacity) {
		if (resize(newArr) != 0) return -1;
	}

	newArr->data[newArr->size] = value;
	newArr->size++;

	return 0;	
}

int resize(DynamicArray* newArr) {
	size_t newCapacity = newArr->capacity * 2;
	int* newData = (int*)malloc(newCapacity * sizeof(int));

	if (newData == NULL) {
		return -1;
	}

	for (size_t i = 0; i < newArr->capacity; i++) {
		newData[i] = newArr->data[i];
	}

	newArr->capacity = newCapacity;
	newArr->data = newData;

	return 0;
}
