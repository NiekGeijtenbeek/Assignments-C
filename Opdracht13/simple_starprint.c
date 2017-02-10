#include <stdio.h>

int main(void)
{
    int input;
    int i;

    printf("Geef een getal: ");

    while(!scanf("%d", &input)) {
	printf("Foutieve invoer. \n");
	while(getchar() != '\n');{

	}
	}