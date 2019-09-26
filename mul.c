#include "monty.h"
/**
 * mul - mul
 *@stack: structure
 *@number_line: number line
 *Return: Nothing
 */
void mul(stack_t **stack, unsigned int number_line)
{
	stack_t *current = *stack;
	stack_t *next_node = NULL;
	int mult;

	if (dlenlist(*stack) < 2)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", number_line);
		fclose(global.fp);
		free(global.line);
		exit(EXIT_FAILURE);
	}
	while (current != NULL)
	{
		next_node = current->next;
		mult = current->n * next_node->n;
		next_node->n = mult;
		pop(stack, number_line);
		break;
	}
}
