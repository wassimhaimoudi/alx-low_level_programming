#include "lists.h"

/**
 * list_len - prints the len of the linked lit
 * @h: the head of the linked list.
 * Return: len of linked list.
 */

size_t list_len(const list_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);

}
