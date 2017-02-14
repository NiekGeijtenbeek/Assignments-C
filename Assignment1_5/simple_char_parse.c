#include <stdio.h>

/*
 ============================================================================
 Name        : simple_char_parse.c
 Author      : N. Geijtenbeek
 ============================================================================
 */
 
int main(){
	int i = 0;
	int c = 0;
	int c2 = 0;
	int isNegative = 0;
	int output = 0;
	int invoer = 0;
	int error = 0;
 
 	printf("Voer een getal in: ");
	while(c == 0){
		i = getchar();
		if(i >= '0' && i <= '9'){
			invoer = i - '0';
			output = (output * 10) + invoer;
			c2++;
			c++;
		}
		if(i == '-' && c2 == 0){
			isNegative = 1;
			c2++;
			c++;
		}

	}
	while(c == 1){		
		i = getchar();
		if(i >= '0' && i <= '9'){
			invoer = i - '0';
			output = (output * 10) + invoer;
		}
		if(i == '-'){
			printf("Error \n");
			error = 1;
			c++;
		}
		if(i == '\n' && isNegative == 0 && error != 1){
			printf("Ingevoerd getal: %d", output);
			c++;
		}
		if(i == '\n' && isNegative == 1 && error != 1){
			printf("Ingevoerd getal: %d", (output * -1));
			c++;
		}
	}
}	