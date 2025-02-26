#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

typedef struct {
	int *data;
	int size;
	int capacity;
} DynamicArray; 

DynamicArray* initializeArr(int numItems);
int getValue(int index);
int getSize();
int append(DynamicArray* arr, int value);
int pop();
int insertAtIndex(int value, int index);
int removeAtIndex(int index);
int resize(int size);
int capacity(DynamicArray* arr);
int printElements();

#endif
