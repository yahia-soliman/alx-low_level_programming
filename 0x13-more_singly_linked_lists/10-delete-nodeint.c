#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - gives a pointer to the nth node of a list
 * @head:  pointer to the first node of the linked list
 * @index: of the needed node (starting from 0)
 *
 * Return: the needed node if it exists
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del = NULL, *pre = NULL;

	if (head)
		del = *head;

	while (del && index)
	{
		index--;
		pre = del;
		del = del->next;
	}

	if (del && index == 0)
	{
		if (pre)
			pre->next = del->next;
		else
			*head = del->next;

		free(del);
		return (1);
	}

	return (-1);
}
