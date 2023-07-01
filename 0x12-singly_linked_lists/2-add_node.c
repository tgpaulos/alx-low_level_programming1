#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_node - a function that adds a new node at the beginning of a list_t list
 *@head:head of list
 *@str:string
 *Return: new node
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(*new_node));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
