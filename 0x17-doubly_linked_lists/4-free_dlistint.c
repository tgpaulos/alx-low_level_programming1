#include <stdlib.h>
#include "lists.h"

/**
 *free_dlistint - frees a dlistint_t list
 *@head: Pointer to the head of the doubly linked list
 *
 *Return:0(success)
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
