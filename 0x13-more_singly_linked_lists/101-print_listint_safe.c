#include "lists.h"

/**
 * print_listint_safe - function name.
 * @head: the head of the linked list
 *
 * Description: prints the elements of the linked list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = NULL;
	const listint_t *checker = NULL;
	size_t nnodes = 0;
	size_t new;

	temp = head;
	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		nnodes++;
		temp = temp->next;
		checker = head;
		new = 0;
		while (new < nnodes)
		{
			if (temp == checker)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (nnodes);
			}
			checker = checker->next;
			new++;
		}
		if (!head)
			exit(98);
	}
	return (nnodes);
}
