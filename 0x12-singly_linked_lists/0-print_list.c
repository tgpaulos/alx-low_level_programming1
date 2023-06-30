#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 *@h:head of linked list
 *
 *Return: count
 */


size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (count);
	}

	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}

	return (count);
}
