/*
 ============================================================================
 Name        : stackcheck.c
 Author      : N. Geijtenbeek
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include "stack.h"

int main(void)
{
    Stack stack;// = {{0}, -1};
    		init_stack(&stack);
    char* input = "({<[]>})";
    char i;
    printf("Stack top: %d \n", stack.top);
//    int size = (sizeof(input) / sizeof(input[0]) - 1);
	int size = strlen(input);
    int counter = 0;

    printf("Invoer: %s \n", input);
    printf("Size: %d \n\n", size);

    while(counter != size) {
		i = *(input + counter);
		//		putchar(i);

		if(i == '(' || i == '{' || i == '[' || i == '<') {
			push(&stack, i);
			printf("push| %c |: ", i);
			show(stack);
			printf("Stack top: %c \n", stack.a[stack.top]);
		}

		else if(i == ')' || i == '}' || i == ']' || i == '>') {
			if(stack.top == -1) {
			printf("STACK IS EMPTY");
			return 0;
			}

			if(i == ')') {
			if(stack.a[stack.top] == '(') {
				int j = pop(&stack);
				printf("pop()  : %c\n", j);
				printf("stack  : ");
				show(stack);
			}
			}
			if(i == '}') {
			if(stack.a[stack.top] == '{') {
				int j = pop(&stack);
				printf("pop()  : %c\n", j);
				printf("stack  : ");
				show(stack);
			}
			}
			if(i == ']') {
			if(stack.a[stack.top] == '[') {
				int j = pop(&stack);
				printf("pop()  : %c\n", j);
				printf("stack  : ");
				show(stack);
			}
			}
			if(i == '>') {
			if(stack.a[stack.top] == '<') {
				int j = pop(&stack);
				printf("pop()  : %c\n", j);
				printf("stack  : ");
				show(stack);
			}
			}
		}
		counter++;
    }
}

//    for(int i = 1; i < 6; i++) {
//        int j = pop(&stack);
//        printf("pop()  : %d\n", j);
//        printf("stack  : ");
//        show(stack);
//    }

//	pop(&stack);  // gaat fout
// printf("stack: %c\n", stack.a[0]);
