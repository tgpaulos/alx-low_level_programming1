#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: position of the node to be retrieved
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;


	while (current != NULL && index > 0)
	{
		current = current->next;
		index--;
	}

	if (current != NULL)
		return (current);


	return (NULL);
}
