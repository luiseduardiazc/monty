#include "monty.h"
/**
 * make_free_error - make_free_error of the stack 
 * @head: structure type stack_t
 * Return: Nothing
 */
void make_free_error(stack_t *head)
{
	if (global.line)
		free(global.line);
	if (global.fp)
		fclose(global.fp);

	free_stack(head);
}
/**
* free_stack - free_stack
* @head: list to be free
* Return: Nothing
*/
void free_stack(stack_t *head)
{
	stack_t *current = head;

	while (current)
	{
		stack_t *next_node = current->next;

		free(current);
		current = next_node;
	}
}

