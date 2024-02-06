#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a list.
 * @head: Address of the first node of a list.
 **/

void free_listint(listint_t *head)
{
	listint_t *t_ptr, *t_ptr2;

	t_ptr = head;
	while (t_ptr != NULL)
	{
		t_ptr2 = t_ptr->next;
		free(t_ptr);
		t_ptr = t_ptr2;
	}
}
