#include <stdio.h>

/*
 ============================================================================
 Name        : open_files.c
 Author      : N. Geijtenbeek
 ============================================================================
 */


int main(void) {
	
	FILE *f1, *f2;
	int ch1, ch2;
	char *p;
	char bestandnaam1[50], bestandnaam2[50];
	
	printf("Geef de naam van het eerste bestand: ");
	gets(bestandnaam1);
	
	printf("Geef de naam van het tweede bestand: ");
	gets(bestandnaam2);
	
	f1 = fopen(bestandnaam1, "r");
	f2 = fopen(bestandnaam2, "r");
	
	p = f2;
	
	if (f1 == NULL) {
		printf("Kan het eerste bestand niet lezen!");
		return 1;
	}
	else if (f2 == NULL) {
		printf("Kan het tweede bestand niet lezen!");
		return 1;
	}
	else {
		ch1 = getc(f1);
		ch2 = getc(f2);
		p++;
	
		while ((ch1 != EOF) && (ch2 != EOF) && (ch1 == ch2)) {
			ch1 = getc(f1);
			ch2 = getc(f2);
			p++;
		}
		
		if (ch1 == ch2)
			printf("De bestanden zijn identiek aan elkaar!");


		else if (ch1 != ch2)
			printf("Bestanden zijn niet identiek, ze zijn ongelijk op adres: %x \n", p);
		
		fclose(f1);
		fclose(f2);
	}
	return 0;
	}
