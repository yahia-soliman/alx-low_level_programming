#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - calculates the sum of all list elements
 * @head:        pointer  to the first node  of the list
 *
 * Return: the sum of the n values of all the nodes ;)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
