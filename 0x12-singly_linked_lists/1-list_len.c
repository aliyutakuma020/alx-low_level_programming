#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns  number of elements in linked list
 * @h: pointer to list_t.
 * Return: returns the number of  elements in h.
 */
size_t list_len(const list_t *h)
{
size_t p = 0;

	while (h)
	{
		p++;
		h = h->next;
	}
	return (p);
}
