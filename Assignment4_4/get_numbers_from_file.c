#include <stdio.h>

/*
 ============================================================================
 Name        : get_numbers_from_file.c
 Author      : N. Geijtenbeek
 ============================================================================
 */


int getIntegers(char* filename,int a[], int size){
	FILE *file;
	file = fopen(filename, "r");
	int temp, temp_minus, store;
	char entry;
	int i = 0;
	
	while (entry != EOF){
	entry = fgetc(file);
	temp;
	store = 0;
	if (isdigit(entry)){
		temp = entry - '0';
		store = temp;
		entry = getc(file);
			while(isdigit(entry)){
				temp = entry - '0';
				store = (store * 10) + temp;
				entry = getc(file);
			}
			a[i] = store;
			i++;
	}
	if (entry == '-'){
		temp_minus = -1;
		entry = getc(file);
		if (isdigit(entry)){
			temp = entry - '0';
			store = (store * 10) + temp;
			entry = getc(file);
			while (isdigit(entry)){
				temp = entry - '0';
				store = (store * 10) + temp;
				entry = getc(file);
			}
			store = temp_minus * store;
			a[i] = store;
			i++;
		}
		else 
			;
		
	}
}
return i;
}



int main(void) {
 int a[100];
 int n = getIntegers("getallen.txt",a, 100);

 if (n > 0) {
 puts("gevonden getallen:");
 for (int i = 0;i < n; i++){
 printf("%d ",a[i]);
 }
 putchar('\n');

 return 0;
}
}

