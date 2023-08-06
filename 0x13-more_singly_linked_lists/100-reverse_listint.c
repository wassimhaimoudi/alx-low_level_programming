#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 *
 * @head: the head of the linkded list
 * Return: pointer to the first node int the list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *after;

	if (head == NULL)
		return (NULL);
	prev = NULL;

	while (*head != NULL)
	{
		after = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = after;
	}
	*head = prev;
	return (*head);
}
