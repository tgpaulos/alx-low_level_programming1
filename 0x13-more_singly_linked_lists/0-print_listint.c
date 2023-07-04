#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: current node
 * Return: length of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
