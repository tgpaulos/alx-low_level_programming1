#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	if (head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{

		new_node->next = *head;
		*head = new_node;
	} else
	{
		listint_t *current = *head;
		unsigned int i = 0;


		while (i < idx - 1)
		{
			if (current == NULL)
			{
				free(new_node);
				return (NULL);
			}

			current = current->next;
			i++;
		}


		new_node->next = current->next;
		current->next = new_node;
	}

	return (new_node);
}
