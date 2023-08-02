#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: the head of the linked list
 * @index: position of the node starting at 0
 * Return: the address of the nth node, NULL if node doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	current = head;
	for (i = 0; current && i < index; i++)
	{
		current = current->next;
	}
	if (current)
		return (current);
	return (NULL);

}
