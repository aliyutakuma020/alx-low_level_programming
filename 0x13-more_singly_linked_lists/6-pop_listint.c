#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: The data (n) of the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *new_node;

	if (*head == NULL)
	{
		return (0);
	}
	new_node = *head;
	data = new_node->n;
	*head = new_node->next;
	free(new_node);
	return (data);
}
