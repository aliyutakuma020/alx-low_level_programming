#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *crt;

	while (*head != NULL)
	{
		crt = *head;
		*head = (*head)->next;
		free(crt);
	}
}
