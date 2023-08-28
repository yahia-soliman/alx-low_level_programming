#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - adds a node at the beginning of a linked list
 * @head: pointer to the statrting point of the list
 * @n: the  number  to  add  in the new node
 *
 * Return: pointer to the mdified list ;)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(*new));
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
