#include "monty.h"
void pall(stack_t **stack, unsigned int number_line)
{
	(void)number_line;

	while (*stack != NULL)
	{
		printf("%d\n", (*stack)->n);
		(*stack) = (*stack)->next;
	}
}

