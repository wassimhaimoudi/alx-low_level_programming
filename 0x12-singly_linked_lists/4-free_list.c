#include "list.h"

/**
 * free_list - frees linked list
 * @head: head of linked list
 */

void free_list(list_t *head)
{
	list_t *current, next;

	current = head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
