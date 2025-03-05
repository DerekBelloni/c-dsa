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
int getValue(DynamicArray* arr, int index);
int getSize(DynamicArray* arr);
int append(DynamicArray* arr, int value);
int pop(DynamicArray* arr);
int insertAtIndex(DynamicArray* arr, int value, int index);
int removeAtIndex(DynamicArray* arr, int index);
int resize(DynamicArray* arr);
int capacity(DynamicArray* arr);
int printElements();

#endif
