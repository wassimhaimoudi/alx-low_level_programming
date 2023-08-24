#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void _print_first(void);

/**
 *struct listNodeFP - node containing function pointers
 *@_callFirst - function pointer
 * @next: points to the next function
 *Description: struct type for function and functionpointers
 */
struct listNodeFP
{
        void(* _callFirst)(void);
        struct listNodeFP* next;
};
void executeList(struct listNodeFP* head);

#endif
