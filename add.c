#include "monty.h"
/**
 * add - add
 *@stack: structure
 *@number_line: number line
 *Return: Nothing
 */
void add(stack_t **stack, unsigned int number_line)
{
	stack_t *current = *stack;
	stack_t *next_node = NULL;
	int sum;

	if (dlenlist(*stack) < 2)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", number_line);
		fclose(global.fp);
		free(global.line);
		exit(EXIT_FAILURE);
	}
	while (current != NULL)
	{
		next_node = current->next;
		sum = current->n + next_node->n;
		next_node->n = sum;
		pop(stack, number_line);
		break;
	}
}

