#include "monty.h"
/**
 * swap - swap
 *@stack: structure
 *@number_line: number line
 *Return: Nothing
 */
void swap(stack_t **stack, unsigned int number_line)
{
	stack_t *current = *stack;
	stack_t *next_node = NULL;
	int aux;

	if (dlenlist(*stack) < 2)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", number_line);
		fclose(global.fp);
		free(global.line);
		exit(EXIT_FAILURE);
	}
	while (current != NULL)
	{
		next_node = current->next;
		aux = current->n;
		current->n = next_node->n;
		next_node->n = aux;
		break;
	}
}
