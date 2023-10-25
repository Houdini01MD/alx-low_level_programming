#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a listint_t list.
* @head: listint_t head
* @n: int data
* Return: the number of nodes
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newNode;

	return (newNode);
}
