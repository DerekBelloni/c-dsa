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
	if (newArr == NULL) return -1;

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

int pop(DynamicArray* newArr) {
	if (newArr == NULL) return -1;

	int removedVal = newArr->data[newArr->size - 1];

	if (removedVal == EMPTY_VALUE) return EMPTY_VALUE;

	newArr->size--;

	return removedVal;	
}

int getValue(DynamicArray* newArr, int index) {
	if (index < 0) return -1;

	int retrievedValue = newArr->data[index];

	if (retrievedValue == EMPTY_VALUE) return EMPTY_VALUE;

	return retrievedValue;
}

int getSize(DynamicArray* newArr) {
	if (newArr == NULL) {
		return -1;
	}	

	int currentSize = newArr->size;

	return currentSize;
}

int insertAtIndex(DynamicArray* newArr, int value, int index) {
	if (newArr == NULL) return -1;

	if (index < 0) return -1;

	if (index >= newArr->size) { 
		newArr->data[newArr->size] = value;
		return 1;
	}

	if (newArr->size == newArr->capacity) {
		if (resize(newArr) != 0) return -1;
	}

	int temp;

	for (size_t i = newArr->size - 1; i >= index; i--) {
		newArr->data[i+1] = newArr->data[1];
		if (i == index) newArr->data[i] = value;
	}


	return 0;
}

int removeAtIndex(DynamicArray* newArr, int index) {
	if (newArr == NULL) return -1;

	if (index < 0) return -1;

	int removedVal;
	for (size_t i = index; i < newArr->size; i++) {
		if (index == i) removedVal = newArr->data[i];	
		newArr->data[i]	= newArr->data[i+1];
	} 

	newArr->size--;
	return removedVal;
}
