#include "lists.h"
/**
 * sum_dlistint - sum of elements
 *                in double-linked list
 * @h: pointer to the first node
 * Return: sum of elements  in the list
 */
int sum_dlistint(dlistint_t *h)
{
	int sum = 0;

	while (h)
	{
		sum += h->n;
		h = h->next;
	}
	return (sum);
}
