#include "lists.h"
#include <stdlib.h>
/**
* delete_nodeint_at_index - Deletes node in a linked list at a certain index.
* @head: pointer to first element in the list.
* @index: index of the node to delete.
* Return: 1 Success or -1 Fail.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tp = *head;
listint_t *cut = NULL;
unsigned int i = 0;

	if (*head == NULL)
	{
	return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(tp);
		return (1);
	}
	while (i < index - 1)
	{
	if (!tp || !(tp->next))
	{
	return (-1);
	}
	tp = tp->next;
	i++;
	}
	cut = tp->next;
	tp->next = cut->next;
	free(cut);
	return (1);
}
