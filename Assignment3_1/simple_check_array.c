#include <stdio.h>

/*
 ============================================================================
 Name        : simple_check_array.c
 Author      : N. Geijtenbeek
 ============================================================================
 */
 
int main(void) {
	int y, size, output;
	int x[] = {1,2,3,4,5,6,7,8,9,10,1,2,3,4,5};
	size = sizeof(x)/sizeof(x[0]);
	
	printf("Kies een getal: ");
	scanf("%d",&y);
	
	output = count(x, y, size);
	printf("%d komt %d keer voor in de array.", y , output);
	
}

int count(int x[], int y, int z) {
	int output = 0;
	for (int c = 0; c != z; c++) {
		if (y == x[c]) {
			output++;
		}
	}
	return output;
}