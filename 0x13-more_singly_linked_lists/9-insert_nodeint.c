#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at given index
 * @head: the head of the linked list
 * @idx: the position before which we will be inserting new node
 * @n: data of the new node
 * Return: the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *current;

	new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	current = *head;
	for (i = 0; current && i < idx; i++)
	{
		current = current->next;
	}

	if (current)
	{
		new->next = current->next;
		current->next = new;
		return (current->next);
	}
	return (NULL);

}
