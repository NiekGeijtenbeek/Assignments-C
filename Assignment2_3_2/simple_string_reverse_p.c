#include <stdio.h>
#include <string.h>
/*
 ============================================================================
 Name        : simple_string_reverse_p.c
 Author      : N. Geijtenbeek
 ============================================================================
 */

int main(void) {
	char s[80], *p;
	int length, i;
	
	printf("Tik tekst in: \n");
	fgets(s, 80, stdin);
	
	p = s;
	length = strlen(s);
	
	for (i = 0; i < length; i++) {
		p++;
	}
	
	printf("In omgekeerde volgorde: ");
	
	for (i = length; i != -1; i--) {
		printf("%c", *p);
		p--;
	}
	
}