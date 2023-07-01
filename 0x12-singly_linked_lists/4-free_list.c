#include "main.h"
#include <stdlib.h>
/**
 *free_list -this function that frees a list_t list
 *@head: head of the list
 */




void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
