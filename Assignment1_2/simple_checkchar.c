#include <stdio.h>

/*
 ============================================================================
 Name        : simple_checkchar.c
 Author      : N. Geijtenbeek
 ============================================================================
 */

int main(void)
{
	char input;
	printf("Enter een character: ");
	input = getchar();
	
	if(isupper(input)){
		printf("\"%c\" is uppercase, de hexadecimale waarde is: %x.", input);
	}
	else if(islower(input)){
		printf("\"%c\" is lowercase, de decimale waarde is: %d.", input);
	}
	else if(isdigit(input)){
		printf("\"%c\" is geen letter.");
	}
	
	return 0;
}