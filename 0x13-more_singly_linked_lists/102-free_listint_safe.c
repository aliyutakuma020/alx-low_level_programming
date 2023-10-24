#include "lists.h"
#include <stdlib.h>
/**
* free_listint_safe - It frees a linked list.
* @h: A pointer to the first node in the linked list.
* Return: returns number of the  elements in the freed list.
*/
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int d;
	listint_t *tp;

	if (!h || !*h)
	{
		return (0);
	}
	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			tp = (*h)->next;
			free(*h);
			*h = tp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
