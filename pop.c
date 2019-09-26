#include "monty.h"
/**
 * pop - pop
 *@stack: structure
 *@number_line: number line
 *Return: Nothing
 */
void pop(stack_t **stack, unsigned int number_line)
{
	stack_t *current = *stack;
	stack_t *next_node = NULL;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", number_line);
		fclose(global.fp);
		free(global.line);
		exit(EXIT_FAILURE);
	}
	while (current != NULL)
	{
		next_node =  current->next;
		if (next_node)
			next_node->prev = NULL;
		*stack = next_node;
		free(current);
		break;
	}
}

