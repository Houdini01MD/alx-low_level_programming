#include "lists.h"

/**
* add_nodeint - adds a new node
* @head: listint_t head
* @n: int data
* Return: the number of nodes
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
