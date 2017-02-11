#include <stdio.h>

/*
 ============================================================================
 Name        : simple_table_calc.c
 Author      : N. Geijtenbeek
 ============================================================================
 */


int main(void){
	
	int input;
	int x;
	
	printf("Kies een getal: ");
	x = scanf("%d", &input);
	
	if(x > 0){
		for(int c = 1; c <= 10; c++){
			printf("\t %d x %d = %d \n", c, input, (c*input));
		}
	}
	else{
		printf("Invoerfout: alleen cijfers zijn mogelijk!");
	}
	
	
	
	return 0;
}
