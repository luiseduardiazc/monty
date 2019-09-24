#ifndef MONTY_H
#define MONTY_H
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
}stack_t;

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
}instruction_t;

void push(stack_t, **head, unsigned int n);

#endif
