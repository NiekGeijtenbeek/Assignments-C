#include <stdio.h>

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
		}
	}
	
	
}

    