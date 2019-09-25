#include "monty.h"
/**
 * is_number - is_number
 * @str: str
 * Return: int parameter
 */
int is_number(char *str)
{
	int length = 0, i;

	length = strlen(str);
	for (i = 0; i < length; i++)
		if (!isdigit(str[i]))
		{
			return (0);
		}
	return (1);
}
/**
 * get_arg - get_arg
 * @line_number: line number
 * Return: Int parameter
 */
int get_arg(unsigned int line_number)
{
	char *arg = NULL;
	int number = 0;

	arg = strtok(NULL, delimiter);
	if (arg == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (!is_number(arg))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	number = atoi(arg);

	return (number);
}
/**
 * push - push
 * @stack: structure
 * @line_number: line number
 * Return: Nothing
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node = NULL;
	int number = 0;

	number = get_arg(line_number);
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	new_node->n = number;
	new_node->next = *stack;
	new_node->prev = NULL;
	if (*stack)
	{
		(*stack)->prev = new_node;
	}
	*stack = new_node;
}
