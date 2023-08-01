#include "lists.h"

/**
 * pop_listint - deletes the hadnode of a linked list.
 * @head: the head of the linked list
 * Return: 0 if lst is empty, otherwise the data of the head node.
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	current = *head;
	*head = (*head)->next;

	free(current);

	return (data);

}
