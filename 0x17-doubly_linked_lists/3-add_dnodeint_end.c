#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: The head of the dlistint_t list.
 * @n: The data associated with the new node.
 *
 * Return: The address of the new node on success, NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp;

	if (!head)
		return (NULL);
	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	temp = (*head);
	if (!(*head))
	{
		(*head) = newNode;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->prev = temp;
	}
	return (newNode);

}
