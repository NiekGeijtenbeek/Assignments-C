#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/*
 ============================================================================
 Name        : txt_to_array.c
 Author      : N. Geijtenbeek
 ============================================================================
 */


FILE* file;
const char* filename = "binary_sudoku_puzzle.txt";

bool check_the_input(const char* filename);
int get_size();
int read_matrix(const char* filename, int size, char matrix[][size]);
void print_matrix(int size, char matrix[][size]);
bool check_the_input(const char* filename);

int main(void)
{
    int size = get_size();
	char matrix[size][size];
	read_matrix(filename, size, matrix);
	bool check_exe = check_the_input(filename);
	printf("Bool: %d \n", check_exe);
	print_matrix(size, matrix);
}

int get_size()
{
    char str[100];
    file = fopen(filename, "r");
    fgets(str, 100, file);
    fclose(file);
    int size = strlen(str);
    return size;
}

int read_matrix(const char* filename, int size, char matrix[][size])
{
    file = fopen(filename, "r");

    char ch = fgetc(file);
    for(int i = 0; i < size; i++) {
	for(int j = 0; j < size; j++) {
	    matrix[i][j] = ch;
	    ch = fgetc(file);
	}
    }
    fclose(file);
    return matrix;
}

void print_matrix(int size, char matrix[][size])
{
    putchar('\n');
    for(int i = 0; i < size; ++i) {
	for(int j = 0; j < size; ++j) {
	    printf("%c", matrix[i][j]);
	}
    }
}

bool check_the_input(const char* filename)
{
	bool check = true;
	file = fopen(filename, "rb");
	char ch;
	
	while (ch = fgetc(file) != EOF){
		ch = fgetc(file);
	if(ch != 45 && ch != 48 && ch != 49 && ch != 10 && ch != 13){
			check = false;
		}
	}
	return check;
}