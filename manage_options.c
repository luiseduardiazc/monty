#include "monty.h"
void get_option(char *op, stack_t **stack, unsigned int line_number)
{
	int i = 0;

	instruction_t instructions[] = {
			{"push", push},
			{NULL, NULL}
	};

	while (instructions[i].opcode != NULL)
	{
		if (strcmp(instructions[i].opcode, op) == 0)
		{
			instructions[i].f(stack, line_number);
			return;
		}
		i++;
	}
	if (instructions[i].opcode == NULL)
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number,op);
		exit(EXIT_FAILURE);
	}
}
