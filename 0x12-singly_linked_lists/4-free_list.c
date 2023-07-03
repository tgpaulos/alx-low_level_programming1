#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */

void free_list(list_t *head)
{

	list_t *list_ptr = head;


	while (list_ptr != NULL)
	{

		free(list_ptr->str);
		head = list_ptr->next;

		free(list_ptr);

		list_ptr = head;
	}
}
