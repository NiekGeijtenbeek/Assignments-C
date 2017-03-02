#include <stdio.h>

/*
 ============================================================================
 Name        : simple_new_struct.c
 Author      : N. Geijtenbeek
 ============================================================================
 */

typedef struct voorwerp {
	int nummer;
	char naam[20];
	double gewicht, lengte;
}	VOORWERP;

int main(void) {
	
	VOORWERP art1;
	
	printf("Naam: ");
	scanf("%s", &art1.naam);
	
	printf("Nummer: ");
	scanf("%d", &art1.nummer);
	
	printf("Gewicht: ");
	scanf("%lf", &art1.gewicht);
	
	printf("Lengte: ");
	scanf("%lf", &art1.lengte);
	
	printf("%s heeft nummer: %d en weegt: %lf KG en heeft een lengte van %lf CM.", art1.naam, art1.nummer, art1.gewicht, art1.lengte);
}
