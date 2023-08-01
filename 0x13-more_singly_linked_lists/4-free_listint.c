#include "lists.h"

/**
 * free_listint - frees linked list.
 * @head: head of the linked list.
 */

void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
