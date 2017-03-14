#include <stdio.h>
#include <stdbool.h>

/*
 ============================================================================
 Name        : check_array_value.c
 Author      : N. Geijtenbeek
 ============================================================================
 */

bool equal_rows(int[], int[], int);

int main(void) {

	int a1[] = {1,2,3,4,5,6,7,8,9,10};
	int a2[] = {10,9,8,7,6,5,4,3,2,1};
	
	int size_a1 = sizeof(a1)/sizeof(a1[0]);
	int size_a2 = sizeof(a2)/sizeof(a2[0]);
	
	bool state = equal_rows(a1, a2, size_a1);
	
	if (state == true) {
		printf("De inhoud van beide arrays is gelijk!");
	}
	
	else {
		printf("De inhoud van beide arrays is niet gelijk aan elkaar!");
	}
}

bool equal_rows(int x[], int y[], int z) {
	int checksum_a = 0;
	int checksum_b = 0;
	bool state;
	
	for (int c = 0; c != z; c++) {
		if(x[c] != y[c]){
			return false;
		}
	}
	/*printf("%d \n", checksum_a);
	printf("%d \n", checksum_b);
	TEST VALUES CHECKT WAARDES VAN BEIDE CHECKSUMS
	*/
	
//	if (checksum_a == checksum_b) {
//		return true;
//	}
//	else {
//		return  false;
//	}
return true;
}