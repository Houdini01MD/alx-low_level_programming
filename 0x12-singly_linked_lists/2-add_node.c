#include "lists.h"

/**
* add_node - function that adds a new node at the beginning of a list_t list.
*
* @head: pointer type list_t
* @str: string
*
* Return: the number of nodes
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t i;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->len = 0;
	while (str[new_node->len] != '\0')
		new_node->len++;

	new_node->str = malloc((new_node->len + 1) * sizeof(char));
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0; i <= new_node->len; i++)
		new_node->str[i] = str[i];

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
