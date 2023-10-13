#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: The head of the dlistint_t list
 * @index: The index of the node starting from 0
 *
 * Return: A pointer to the node, NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (!head)
		return (NULL);
	temp = head;
	i = 0;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
