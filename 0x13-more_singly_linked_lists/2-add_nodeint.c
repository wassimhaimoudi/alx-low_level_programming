#include "lists.h"

/**
 * add_nodeint - adds new node a the beginning of linked list
 * @head: the head of the node
 * @n: data of the added node
 * Return: address of he new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
