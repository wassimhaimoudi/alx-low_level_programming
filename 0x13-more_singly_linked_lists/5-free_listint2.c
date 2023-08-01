#include "lists.h"

/**
 * free_listint2 - frees linked list and  sets head to NULL
 * @head: head of the linked list.
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL)
		return;

	current = *head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
