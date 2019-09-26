#include "monty.h"
/**
 * pall - pall
 *@stack: structure
 *@number_line: number line
 *Return: Nothing
 */
void pall(stack_t **stack, unsigned int number_line)
{
	stack_t *current = *stack;
	(void)number_line;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

