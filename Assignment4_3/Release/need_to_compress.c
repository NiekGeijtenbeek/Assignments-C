	#include <stdio.h>

							




	
		
	
	void compress(char* src_filename, char* dest_filename)
{
FILE *in_file, *out_file;
char ch;
const char* file_in = src_filename;
const char* file_out = dest_filename;

    in_file = fopen(file_in, "r");
out_file = fopen(file_out, "w");

    ch = fgetc(in_file);
while(ch != EOF) {
	if(ch == '\r') {
	    ch = fgetc(in_file);
	    if(ch == '\n') {
		ch = fgetc(in_file);
		if(ch == ' ') {
		    while(ch == ' ')
			ch = fgetc(in_file);
		}
	    }
	} else if(ch == '\n') {
	    fputc(ch, out_file);
	    ch = fgetc(in_file);
	    if(ch == ' ') {
		while(ch == ' ')
		    ch = fgetc(in_file);
	    }
	}
	fputc(ch, out_file);
	ch = fgetc(in_file);
}
}
int main(int argc, char* argv[])
{
compress("need_to_compress.c", "has_been_compressed.c");
return 0;
}