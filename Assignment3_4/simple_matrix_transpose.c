#include <stdio.h>

/*
 ============================================================================
 Name        : simple_matrix_transpose.c
 Author      : N. Geijtenbeek
 ============================================================================
 */
 
void transpose_matrix(int size, int matrix[][size]);

int main(void)
{

    int matrix[][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};

    int size = (sizeof(matrix) / sizeof(matrix[0][0])) / 3;
//    printf("De grote van de array is: %d \n", size);

    transpose_matrix(size, matrix);
}
void transpose_matrix(int size, int matrix[][size])
{
    int j;
    int i;
	
	//Flip
    for(i = 0; i < size; i++) {
	for(j = i + 1; j < size; j++) {
	    int temp = matrix[i][j];
	    matrix[i][j] = matrix[j][i];
	    matrix[j][i] = temp;
	}
    }
	//Print the matrix
    for(int i = 0; i < size; i++) {
	for(int j = 0; j < size; j++) {
	    printf("%d ", matrix[i][j]);
	}
	printf("\n");
    }
}
