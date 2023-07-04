#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *new_head = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *next = current->next;
		current->next = new_head;
		new_head = current;
		current = next;
	}

	*head = new_head;
	return *head;
}
