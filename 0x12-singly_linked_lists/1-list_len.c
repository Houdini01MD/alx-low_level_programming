#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * @h: is a pointer to the head of a linked list
 * Return: the number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		if (h == NULL)
		{
			count++;
			h = h->next;
		}
	}
	return (count);
}
