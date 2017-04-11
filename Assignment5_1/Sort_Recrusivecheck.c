#include <stdio.h>
#include <stdbool.h>

/*
 ============================================================================
 Name        : Sort_Recrusivecheck.c
 Author      : N. Geijtenbeek
 ============================================================================
 */


bool is_sorted(int a[], int size);

int main(int argc, char** argv)
{
    
    int a[5] = {1, 2, 3, 4, 5};
	int size = sizeof(a) / sizeof(a[0]);
	
	// printf("Grote size: %d", size); DEBUG
	
    if(is_sorted(a, size) == true) {
	printf("De array is gesorteerd!");
    
	} else {
	printf("De array is niet gesorteerd!");
    
	}
    return 0;
}

bool is_sorted(int a[], int size)
{
    int* pointer;
    pointer = a;

    if(size <= 1) {
	//printf("Error in size <= 1");
	return true;
    }

    if(size == 2) {

	if(*pointer > *(pointer + 1)) {
	    //printf("Error in ==2");
		return 0;
		
	} else {
	    return is_sorted(a + 1, size - 1);
	}
	
    }

    if(size > 2) {
	
	if(*pointer > *(pointer + 1)) {
	    return false;
	} else {
	    return is_sorted(a + 1, size - 1);
	}
    }
    return true;
}