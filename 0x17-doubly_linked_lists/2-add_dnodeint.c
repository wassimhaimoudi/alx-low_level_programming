#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: the head of the dlistint_t list
 * @n: the data associated with the new node.
 *
 * Return: the new node on success, NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (!head)
		return (NULL);
	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (*head)
	{
		newNode->next = (*head);
		(*head)->prev = newNode;
	}
	(*head) = newNode;
	return (*head);
}
