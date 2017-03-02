#include <stdio.h>
#include <string.h>
/*
 ============================================================================
 Name        : simple_string_reverse_ind.c
 Author      : N. Geijtenbeek
 ============================================================================
 */

int main(void) {
	char s[80];
	
	printf("Tik tekst in: \n");
	fgets(s, 80, stdin);
	
	int length = strlen(s);
	
	printf("In omgekeerde volgorde: ");
	for (int i = length; i != -1; i--) {
		printf("%c", s[i]);
	}
}