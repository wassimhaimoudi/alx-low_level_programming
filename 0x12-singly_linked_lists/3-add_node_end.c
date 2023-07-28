#include "lists.h"

/**
 * add_node_end - add a node at the end of the linked list
 * @head: head of the linked list
 * @str: data of the node.
 * Return: address of the new node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;

	new = (list_t *)malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (*head);
	}
	current = *head;
	while (current->next)
	{
		current = current->next;
	}
	current->next = new;
	return (new);
}
