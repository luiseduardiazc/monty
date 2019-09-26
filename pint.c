#include "monty.h"
/**
 * pint - pint
 *@stack: structure
 *@number_line: number line
 *Return: Nothing
 */
void pint(stack_t **stack, unsigned int number_line)
{
	stack_t *current = *stack;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", number_line);
		fclose(global.fp);
		free(global.line);
		/* make_free_error(stack); */
		exit(EXIT_FAILURE);
	}
	while (current != NULL)
	{
		printf("%d\n", current->n);
		break;
	}
}
