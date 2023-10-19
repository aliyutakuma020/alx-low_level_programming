#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds new node at the end of a linked list.
 * @head: pointer to a pointer to the list_t list.
 * @str: string to put in the new node
 * Return: returns address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *tp = *head;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}
	n = malloc(sizeof(list_t));
	if (!n)
	{
		return (0);
	}
	n->str = strdup(str);
	n->len = len;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (tp->next)
	{
		tp = tp->next;
	}
	tp->next = n;
	return (n);
}
