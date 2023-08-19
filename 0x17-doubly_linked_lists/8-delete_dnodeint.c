#include "lists.h"

/**
 * delete_node - Deletes a given node from a doubly linked list.
 * @node: A pointer to the node to delete.
 *
 * Return: Nothing.
 */

void delete_node(dlistint_t *node)
{
	node->prev->next = node->next;

	if (node->next != NULL)
		node->next->prev = node->prev;
	free(node);
}

/**
 * delete_dnodeint_at_index - Deletes the node at the given index of a
 *                            doubly linked list.
 * @head: A pointer to a pointer to the head node of the list.
 * @index: The index of the node to delete. Indexing starts at 0.
 *
 * Return: 1 if the deletion was successful, -1 otherwise.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;

	unsigned int i;

	if (head == NULL || *head == NULL)

		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	i = 0;

	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	delete_node(current);
	return (1);
}
