#include <stdio.h>
#include "../include/list.h"

int main() {
	// create an empty list structure
	List* newList = createList();
	printf("List size: %i", newList->size); 
	return 0;
}
