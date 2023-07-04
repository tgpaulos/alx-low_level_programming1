#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - Write a function that prints a listint_t linked list
 * @head: A pointer to the head of the listint_t
 * Return:the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	const listint_t *current = head;

	while (current != NULL)
	{

		count++;
		current = current->next;

		if (current ==
				head)
		{
			exit(98);
		}
	}

	return (count);
}
