#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the first node of a listint
 * @head:  address of the pointer to a liked listint
 *
 * Return:  (n)   the number inside the deleted node
 */
int pop_listint(listint_t **head)
{
	int pop = 0;
	listint_t *push;

	if (head)
		push = *head;

	if (head && *head)
	{
		pop = push->n;
		*head = push->next;
		free(push);
	}

	return (pop);
}
