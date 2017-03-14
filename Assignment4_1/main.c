#include <stdio.h>

int main(void) { 
	
	FILE *out_file, *in_file;
	char* filename = "output.txt";
	
	out_file = fopen(filename, "w");
	
	fputc('T', out_file);
	fputc('R', out_file);
	fputc('Y', out_file);
	fputc('\n', out_file);
	
	fputs("Oke mooi dit man!\n", out_file);
	fprintf(out_file, "%d", (5*55));
	
	fclose(out_file);

// ======================================================= //

	int c;
	
	in_file = fopen(filename, "r");
	
	while (c != EOF) {
		fgetc(in_file);
		printf("%c", c);
	}
	
	
}
