#include <stdio.h>
#include <ctype.h>

int getWords(char* filename, int word_size, char a[][word_size])
{
    FILE* file;
    file = fopen(filename, "r");
    char entry;
    int temp = 0, size = 0, word_count = -1, letter_count = 0;
    
	while(entry != EOF) {
	entry = fgetc(file);
	if(isalnum(entry)) { 
		putchar(entry); 
		word_count++;
		temp++;
//		a[word_count][letter_count] = entry;
		letter_count++;
		entry = fgetc(file);
			while(isalnum(entry) || entry == ' ') {
				putchar(entry);
//				a[word_count][letter_count] = entry;
				letter_count++;
				entry = fgetc(file);
				temp++;
			}
			
	} else {
//	    putchar(' ');
		if(temp > size)
		size = temp;
	    temp = 0;
	}
	

	}
	
printf("Woorden: %d \n", word_count);
printf("size: %d \n", size);
//	word_size = size;
	return 0;
}

int main(void)
{
    int word_size = 56;
   

    char a[1000][word_size];
    int n = getWords("opdracht_4_5.c", word_size, a);
    if(n > 0) {
	puts("Gevonden woorden: ");
	for(int i = 0; i < n; i++) {
	    printf("%3d %s\n", i, a[i]);
	}
    }
    return 0;
}
