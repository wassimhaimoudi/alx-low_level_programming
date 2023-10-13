#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: The head of the linked list
 *
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
