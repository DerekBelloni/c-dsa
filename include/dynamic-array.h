#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

#include <stddef.h>

#define EMPTY_VALUE -1


typedef struct {
	int *data;
	size_t size;
	size_t capacity;
} DynamicArray; 

DynamicArray* initializeArr(int numItems);
int getValue(int index);
int getSize();
int append(DynamicArray* arr, int value);
int pop();
int insertAtIndex(int value, int index);
int removeAtIndex(int index);
int resize(DynamicArray* arr);
int capacity(DynamicArray* arr);
int printElements();

#endif
