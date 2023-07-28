#include "lists.h"

/**
 * add_node - add new node to the beginning of a linked list
 * @head: a pointer to the pointer head.
 * @str: data for the new node.
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL)
		return (NULL);
	new = (list_t *)malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
