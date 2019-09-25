#include "monty.h"
/**
 * pall - pall
 *@stack: structure
 *@number_line: number line
 *Return: Nothing
 */
void pall(stack_t **stack, unsigned int number_line)
{
	(void)number_line;

	while (*stack != NULL)
	{
		printf("%d\n", (*stack)->n);
		(*stack) = (*stack)->next;
	}
}

