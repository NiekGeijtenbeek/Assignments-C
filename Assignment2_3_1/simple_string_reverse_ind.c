#include <stdio.h>
#include <string.h>
/*
 ============================================================================
 Name        : simple_string_reverse_ind.c
 Author      : N. Geijtenbeek
 ============================================================================
 */

int main(void) {
	char s[81];
	char temp;
	
	printf("Tik tekst in: \n");
	fgets(s, 81, stdin);
	
	int length = strlen(s) - 1;
	
	printf("In omgekeerde volgorde: ");
	
	for (int i = 0; i < length; i++, length--) {
		temp = s[i];
		s[i] = s[length];
		s[length] = temp;
	}
	
	printf("%s", s);
}