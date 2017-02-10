#include <stdio.h>

/*
 ============================================================================
 Name        : simple_starprint_for.c
 Author      : N. Geijtenbeek
 ============================================================================
 */

int main(void){
	
	int input;
	int x;
	
	printf("Kies een getal: ");
	x = scanf("%d", &input);
	
	if(x == 0){
		printf("Foutieve fout: invoer moet een getal zijn.");
	}
	
	if(x > 0){
		if(input >= 0 && input <= 81){
			for(int c = 0; c < input; c++){
				printf("%c", '\n');
				
				for(int c2 = 0; c2 < c; c2++){
					printf("%c", '*');
			
				}
			}
			
			for(int c = input; c > 0; c = (c - 1)){
				printf("%c", '\n');
				
				for(int c2 = c; c2 > 0; c2 = (c2 - 1)){
					printf("%c", '*');
				}
			}
		}
		else{
			printf("Foutieve invoer: invoer moet tussen de 0 en 81 zijn.");
		}
	}
}

    