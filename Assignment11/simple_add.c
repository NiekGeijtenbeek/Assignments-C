#include <stdio.h>

/*
 ============================================================================
 Name        : simple_add.c
 Author      : N. Geijtenbeek
 ============================================================================
 */

int main(void)
{

    int x;
    printf("Kies een getal: ");

    while(!scanf("%d", &x)) {
	printf("Invoerfout \n");
	while(getchar() != '\n')
	    ;
	printf("Kies een getal: ");
    }
    printf("Gekozen getal: %d \n", x);

    int y;
    printf("Kies een tweede getal: ");

    while(!scanf("%d", &y)) {
	printf("Invoerfout! \n");
	while(getchar() != '\n')
	    ;
	printf("Kies een getal: ");
    }
    printf("Gekozen getal: %d \n", y);

    printf("%d + %d = %d", x, y, (x + y));
}
