#include "lists.h"

/**
 * sum_listint - sums all the data (n) of the linked list.
 * @head: head of the linked list
 * Return: sum of data, if list is empty 0
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

	sum = 0;

	if (head == NULL)
		return (0);

	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);

}
