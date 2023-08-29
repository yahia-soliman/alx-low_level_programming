#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head:            the listint to reverse
 *
 * Return: the list in reverse
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL, *nxt = NULL;

	if (head)
		nxt = *head;

	while (nxt)
	{
		nxt = nxt->next;
		(*head)->next = pre;
		pre = *head;
		*head = nxt;
	}
	*head = pre;

	return (pre);
}
