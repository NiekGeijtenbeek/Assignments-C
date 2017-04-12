#include <stdio.h>
#include <ctype.h>

/*
 ============================================================================
 Name        : compressor.c
 Author      : N. Geijtenbeek
 ============================================================================
 */
 
void compress(char* src_file, char* dest_filename)
{
    FILE* file_in;
    FILE* file_out;
    file_in = fopen(src_file, "r");
    file_out = fopen(dest_filename, "w");

    char entry;
    int check;

    while(entry != EOF) {
	entry = getc(file_in);
	if(isalnum(entry) || ispunct(entry)) {		
	    check = 1;
	}
	if(check == 1) {
	    putc(entry, file_out);
//		printf("%c", entry);
	}
	if(entry == '\n') {
	    check = 0;
	}
    }
    fclose(file_in);
    fclose(file_out);
}
int main(void)
{
    compress("../compressor.c", "compressor_compressed.c");
	printf("File has been compressed!");
    return 0;
}
