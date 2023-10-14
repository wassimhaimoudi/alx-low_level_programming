#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: The head of the list
 * @idx: The index of the list where the new node should be added.
 * @n: The data associated with the new node
 *
 * Return: The new node on success, NULL on failure.
 * If it is not possible to add the new node don't
 * add the new node and return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *newNode;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (!(*h) || idx == 0)
	{
		newNode->next = *h;
		if (*h)
			(*h)->prev = newNode;
		*h = newNode;
		return (newNode);
	}
	temp = *h;
	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (!temp)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = temp->next;
	newNode->prev = temp;
	if (temp->next)
		temp->next->prev = newNode;
	temp->next = newNode;
	return (newNode);
}

