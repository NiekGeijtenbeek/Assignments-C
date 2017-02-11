#include <stdio.h>


int main(void){

int input;
int x;
int c = 0;
int c2 = 0;
int c3 = 0;
	
	printf("Kies een getal: ");
	x = scanf("%d", &input);
	
	if(x > 0){
			if(input >= 0 && input <= 81){
				while(c != input){
					printf("%c", '\n');
					c++;
					c2 = (c2 + c);
			
					while(c3 != c2){
					printf("%c", '*');
					c3++;
					}
			}
			while(c3 != input){
				printf("%c", '\n');
				c--;
				c2 = (c2 - c);
				while(c3 != c2){
					printf("%c", '*');
					c3--;
				}
			}
		}	else{
			printf("Invoerfout: invoer moet tussen de 0 en 81 zijn.");
		}
	}
	else{
		printf("Invoerfout: invoer moet een getal zijn.");
	}
}