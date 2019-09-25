#include "monty.h"
/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: exit status
 */
int main(int argc, char **argv)
{
	stack_t *head;

	head = NULL;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file_process(argv[1], head);
	return (EXIT_SUCCESS);
}
