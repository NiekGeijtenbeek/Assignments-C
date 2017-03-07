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
	int length;
	int i;
	
	printf("Tik tekst in: \n");
	fgets(str, 80, stdin);
	
	length = strlen(str) - 2;
	i = length;
	ptr = str;
	

/*	printf("%d", i);
	printf("%c", ptr[0]);
	printf("%c", ptr[length]);*/
	
	for (int c = 0; c != i; c++, i--) {
		temp = ptr[c];
		str[c] = ptr[i];
		str[i] = temp;
 	}
	printf("Omgekeerd: %s", str);
}