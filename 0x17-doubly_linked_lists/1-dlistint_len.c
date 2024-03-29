#include "lists.h"

/*
 * dlistint_len: returns the number of elements in a linked list.
 *
 * @h: Pointer to the head of the linked list
 *
 * Returns: The number of elements in the linked list
 */


size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

