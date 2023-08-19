#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given
 * position in a doubly linked list.
 *
 * @h: Pointer to the head of the list
 *
 * @idx: Index where the new node should be added
 *
 * @n: Value to be stored in the new node
 *
 * Return: Address of the new node
 *
 */

dlistint_t *create_node(int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		printf("Memory allocation failed!\n");

		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	return (new_node);
}

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	unsigned int i;

	if (h == NULL)
	{

	return (NULL);

	}

	dlistint_t *new_node = create_node(n);

	if (new_node == NULL)
	{
		return NULL;
	}

	if (idx == 0)
	{
		new_node->next = *h;

		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}

		*h = new_node;
	} else
	{
		dlistint_t *current = *h;

		i = 0;

		while (current != NULL && i < idx - 1)
		{
			current = current->next;
			i++;
		}

		if (current == NULL)
		{
			free(new_node);

		return (NULL);

		}

		new_node->next = current->next;
		new_node->prev = current;

		if (current->next != NULL)
		{
			current->next->prev = new_node;
		}
		current->next = new_node;
	}

	return (new_node);
}
