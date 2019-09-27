#include "monty.h"
global_t global;
/**
 * main - main of our program
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
	file_process(argv[1], &head);
	return (EXIT_SUCCESS);
}
