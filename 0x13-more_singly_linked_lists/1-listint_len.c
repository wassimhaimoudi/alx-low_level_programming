#include "lists.h"

/**
 * listint_len - prints all linked list elements
 * @h: head of linked list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
