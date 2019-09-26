#include "monty.h"
/**
* dlenlist - dlenlist
* @h: pointer
* Return: count of elements
*/
size_t dlenlist(const stack_t *h)
{
	size_t count = 0;
	stack_t const *current = h;

	if (!current)
	{
		return (count);
	}
	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
