#include <stdio.h>
#include <stdbool.h>

/*
 ============================================================================
 Name        : check_requirements_array.c
 Author      : N. Geijtenbeek
 ============================================================================
 */

bool valid_row(int[], int);

int main(void)
{

    int array[] = {1, 0, 1, 0, 1, 0, 1, 0};
    int size = sizeof(array) / sizeof(array[0]);

    bool check = valid_row(array, size);

    if(check == true) {
	printf("De inhoud van de array voldoet aan de eisen!");
    } else {
	printf("De inhoud voldoet niet aan de eisen!");
    }
}

bool valid_row(int array[], int size)
{
    bool even = false;
    bool serie_3 = false;
    bool nuleneen = false;

    int count_1 = 0;
    int count_0 = 0;
    int check_nuleen = 0;
    int serie_check = 0;

    for(int c = 0; c != size; c++) {
	if(array[c] == 0 || array[c] == 1) {
	    ;
	} else {
	    check_nuleen++;
	}
	if(array[c] == 1) {
	    count_1++;
	}
	if(array[c] == 0) {
	    count_0++;
	}
    }
    if(check_nuleen == 0) {
	nuleneen = true;
    }
    /*    printf("nuleenbool: %d \n", nuleneen);*/
    if(count_1 == count_0) {
	even = true;
    }
    /*    printf("evenbool: %d \n", even);*/
    for(int c = 0; c != size; c++) {

	if(array[c] == array[c + 1] && array[c + 1] == array[c + 2] && array[c + 2] == array[c + 3]) {
	    serie_check++;
	}
    }
    if(serie_check == 0) {
	serie_3 = true;
    }
    /*    printf("seriebool: %d \n", serie_3);*/

    if(nuleneen == true && serie_3 == true && even == true) {
	return true;
    } else {
	return false;
    }
}