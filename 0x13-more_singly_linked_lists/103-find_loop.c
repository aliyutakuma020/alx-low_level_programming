#include "lists.h"

/**
* find_listint_loop - It finds loop in a linked list.
* @head: linked list to be searched.
*
* Return: returns address of the node where the loop starts or NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *s = head;
listint_t *f = head;

	if (!head)
	{
		return (NULL);
	}
	while (s && f && f->next)
	{
		f = f->next->next;
		s = s->next;
		if (f == s)
		{
			s = head;
			while (s != f)
			{
				s = s->next;
				f = f->next;
			}
			return (f);
		}
	}
return (NULL);
}
