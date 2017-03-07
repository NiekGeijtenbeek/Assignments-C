#include <stdio.h>

/*
 ============================================================================
 Name        : simple_passtrough.c
 Author      : N. Geijtenbeek
 ============================================================================
 */

int main(void)
{
    int a[10] = {0, 1, 1, 1, 0, 1, 0, 1, 0, 1};
    int c = 0;
	int c2 = 0;
	
	for (int i = 0; i<10; i++) {
		if (a[i] == 0) {
			c++;
		}
		if (a[i] == 1) {
			c2++;
		}
	}
	
	printf("Aantal 0: %d \n", c);
	printf("Aantal 1: %d \n", c2);
  
	if (c2 == c) {
		printf("Er is een gelijk aantal 0'en als 1'en! \n");
	}
	if (c2 != c) {
		printf("Er is een ongelijk aantal 0'en als 1'en! \n");
	}
}
