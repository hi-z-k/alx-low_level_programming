#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete the first element of a singly linked list.
 * @head: Pointer to a list.
 * Return: Integer if success.
 **/

int pop_listint(listint_t **head)
{
	listint_t *t_ptr;
	int my_data;

	if (*head == NULL)
		return (0);

	t_ptr = *head;
	*head = t_ptr->next;
	x = t_ptr->n;
	free(t_ptr);
	return (x);
}
