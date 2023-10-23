#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function that frees a listint_t list.
  * @head: listint_t list to be freed
  */
void free_listint(listint_t *head)
{
	listint_t *crt;

	while (head != NULL)
	{
		crt = head;
		head = head->next;
		free(crt);
	}
}
