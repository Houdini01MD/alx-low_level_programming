#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 *
 * @h: pointer type list_t
 *
 * Return: the number of nodes
*/

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
