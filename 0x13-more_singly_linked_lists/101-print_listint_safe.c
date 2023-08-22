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
	size_t nnodes = 0;
	const listint_t *temp, *checker;

	if (head)
	{
		temp = head;
		checker = head;
		for (; checker;)
		{
			printf("[%p] %d\n", (void *)temp->next, temp->n);
			nnodes++;
			temp = temp->next;
			checker = checker->next->next;
			if (checker == temp)
				break;
		}
		return (nnodes);
	}
	else
	{
		exit(98);
	}
}
