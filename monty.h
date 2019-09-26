#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define delimiter " \t\n\r"
/**
* struct stack_s - doubly linked list representation of a stack
* @n: integer
* @prev: points to the previous element of the stack
* @next: points to the next element of the stack
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO Holberton project
*/
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
* struct instruction_s - opcode and its function
* @opcode: the opcode
* @f: function to handle the opcode
*
* Description: opcode and its function
* for stack, queues, LIFO, FIFO Holberton project
*/
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
* struct global_s - global structure
* @line: pointer used by strtok
* @fp: pointer used by open file
*
* Description: opcode and its function
* for stack, queues, LIFO, FIFO Holberton project
*/
typedef struct global_s
{
	char *line;
	FILE *fp;
} global_t;
extern global_t global;

void push(stack_t **stack, unsigned int n);
void file_process(char *path, stack_t **stack);
void get_option(char *op, stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int number_line);
void free_stack(stack_t *head);
void make_free_error(stack_t *head);
void pint(stack_t **stack, unsigned int number_line);
void pop(stack_t **stack, unsigned int number_line);
#endif

