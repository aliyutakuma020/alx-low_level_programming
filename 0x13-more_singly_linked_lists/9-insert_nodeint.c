#include "lists.h"
#include <stdlib.h>
/**
* insert_nodeint_at_index - Inserts new node at given position in the list.
* @head: Pointer to a pointer to the head of the list.
* @idx: The index where the new node should be added (starting from 0).
* @n: The value to be stored in the new node.
*
* Return: The address of the new node, or NULL if it failed.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int t;
listint_t *new;
listint_t *tp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (t = 0; tp && t  < idx; t++)
	{
	if (t == idx - 1)
	{
		new->next = tp->next;
		tp->next = new;
		return (new);
	}
	else
	{
	tp = tp->next;
	}
	}

	return (NULL);
	}
