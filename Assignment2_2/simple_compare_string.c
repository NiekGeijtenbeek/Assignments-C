#include <stdio.h>
#include <string.h>

/*
 ============================================================================
 Name        : simple_compare_string.c
 Author      : N. Geijtenbeek
 ============================================================================
 */

int main(void) {
	char s[80];
	char s2[80];
	
	printf("Tik tekst 1 in: ");
	fgets(s, 80, stdin);
	
	printf("Tik tekst 2 in: ");
	fgets(s2, 80, stdin);
	
	for (int c = 0; c < strlen(s)+1; c++) {
		if (s[c] != s2[c]) {
			printf("Het verschil begint bij index: %d", c);
			c = 81;
		}
	}
}
