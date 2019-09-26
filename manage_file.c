#include "monty.h"
/**
 * get_filename - get_filename
 * @path: path
 * Return: file name
 */
char *get_filename(char *path)
{
	char *aux_ptr = NULL, *token = NULL;

	token = strtok_r(path, "/", &aux_ptr);
	while (strcmp(aux_ptr, "") != 0)
	{
		token = strtok_r(NULL, "/", &aux_ptr);
	}
	return (token);
}
/**
 * file_process - file_process
 * @path: path
 * @stack: struct type stack_t
 * Return: Nothing
 */
void file_process(char *path, stack_t **stack)
{

	char *filename = NULL;
	/* char *line = NULL; */
	char *op = NULL;
	size_t len = 0, count_lines = 1;
	ssize_t read;

	global.fp = fopen(path, "r");
	if (global.fp == NULL)
	{
		/* filename = get_filename(path); */
		fprintf(stderr, "Error: Can't open file %s\n", path);
		make_free_error(*stack);
		exit(EXIT_FAILURE);
	}

	while ((read = getline(&global.line, &len, global.fp)) != -1)
	{
		op = strtok(global.line, delimiter);
		get_option(op, stack, count_lines);
		count_lines++;
	}

	fclose(global.fp);
	if (global.line)
		free(global.line);
	free_stack(*stack);
}
