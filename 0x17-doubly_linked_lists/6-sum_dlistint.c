# include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a dlistint_t linked list
 *
 * @head:pointer to the head of the list
 *
 * Return:sum of all the data (n) in the list
 *
 */


int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *current;

	if (head == NULL)
	{
		return (0);
	}

	sum = head->n;
	current = head->next;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
