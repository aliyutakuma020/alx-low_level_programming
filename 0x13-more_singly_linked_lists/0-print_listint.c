#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - It prints the elements of a linked list.
 * @h: pointer to the list_t list to print.
 * Return: returns the number of nodes printed.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
