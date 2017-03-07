#include <stdio.h>
#include <string.h>
/*
 ============================================================================
 Name        : simple_string_reverse_p.c
 Author      : N. Geijtenbeek
 ============================================================================
 */

int main(void) {
	char str[81], temp, *ptr, *ptr2;

	printf("Tik een tekst in: \n");
	fgets(str, 80, stdin);
	
	ptr = str;
	ptr2 = str + strlen(str) - 2;
	
	for (int c = 0; c < (strlen(str)/2); c++, ptr++, ptr2--) {
		temp = *ptr;
		*ptr = *ptr2;
		*ptr2 = temp;
	}
	printf("Omgekeerd: %s", str);
}