#include <stdio.h>
#include <stdlib.h>
#include "../include/dynamic-array.h"


int main() {
	DynamicArray* newArr = initializeArr(5);
	if (newArr == NULL) {
		printf("Initialization failed");
		return 1;
	}
	printf("New Array Size: %i, New Array Capacity: %i", newArr->size, newArr->capacity);
	return 0;
}

