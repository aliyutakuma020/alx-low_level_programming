#include "lists.h"
/**
 * listint_len  - Returns the number of elements in a linked list.
 * @h: pointer to the lisint_t list
 * Return: The number of elements in (h).
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
