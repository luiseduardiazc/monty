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
	int result;

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
		result = next_node->n * current->n;
		next_node->n = result;
		pop(stack, number_line);
		break;
	}
}
