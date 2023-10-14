#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t list.
 * @head: The head of the list
 *
 * Return: The sum of all data in the list, 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	if (!head)
		return (0);
	for (; head;)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
