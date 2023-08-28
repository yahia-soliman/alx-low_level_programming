#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees all the nodes of a linked list
 * @head: pointer to pointer to the  first node  of it
 */
void free_listint(listint_t *head)
{
	listint_t *push;

	while (head)
	{
		push = head->next;
		free(head);
		head = push;
	}
}
