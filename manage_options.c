#include "monty.h"
/**
 * get_option - get_option
 * @op: option
 * @stack: structure
 * @line_number: line number
 * Return: Nothing
 */
void get_option(char *op, stack_t **stack, unsigned int line_number)
{
	int i = 0;

	instruction_t instructions[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"mul", mul},
		{"div", _div},
		{"mod", _mod},
		{NULL, NULL}
	};

	while (instructions[i].opcode != NULL && op != NULL)
	{
		if (strcmp(instructions[i].opcode, op) == 0)
		{
			instructions[i].f(stack, line_number);
			return;
		}
		i++;
	}
	if (instructions[i].opcode == NULL && op[0] != '#')
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number, op);
		make_free_error(*stack);
		exit(EXIT_FAILURE);
	}
}
