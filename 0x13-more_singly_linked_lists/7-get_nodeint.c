#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @Index of the node, starting at 0.
 * Return: The data (n) of the head node, or 0 if the list is empty.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL; i++)
	{
		if (i == index)
		{
			return (head);
			head = head->next;
		}
	}
	return (NULL);
}
