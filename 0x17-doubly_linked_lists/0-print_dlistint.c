#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: the head of the dlistint list
 *
 * Return: Void
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter;
	dlistint_t *temp;

	counter = 0;
	temp = (dlistint_t *)h;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		counter++;
	}
	return (counter);
}
