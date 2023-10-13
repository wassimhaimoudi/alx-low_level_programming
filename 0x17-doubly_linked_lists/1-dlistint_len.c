#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: The head of the dlistint_t list
 *
 * Return: Void
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	dlistint_t *temp = (dlistint_t *)h;

	while (temp)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}
