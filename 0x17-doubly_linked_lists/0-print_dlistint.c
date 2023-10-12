#include "lists.h"
/**
 * print_dlistint - prints nodes
 * @h: pointer to the first node
 * Return: total  printed  nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n += 1;
	}
	return (n);
}
