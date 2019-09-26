#include "monty.h"
/**
 * _div - _div
 *@stack: structure
 *@number_line: number line
 *Return: Nothing
 */
void _div(stack_t **stack, unsigned int number_line)
{
	stack_t *current = *stack;
	stack_t *next_node = NULL;
	int result;

	if (dlenlist(*stack) < 2)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", number_line);
		fclose(global.fp);
		free(global.line);
		exit(EXIT_FAILURE);
	}
	while (current != NULL)
	{
		next_node = current->next;
		if (current->n == 0)
		{
			fprintf(stderr, "L%u: division by zero\n", number_line);
			fclose(global.fp);
			free(global.line);
			exit(EXIT_FAILURE);
		}
		result = next_node->n / current->n;
		next_node->n = result;
		pop(stack, number_line);
		break;
	}
}


