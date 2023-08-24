#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a node at the end of a list
 * @head: pointer to a holder of first node location
 * @str:  the value to be added to new->str
 * Return: at success returns pointer to new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	new = *head;
	if (new)
	{
	while (new->next)
		new = new->next;
	new->next = malloc(sizeof(list_t));
	new = new->next;
	}
	else
		new= *head = malloc(sizeof(list_t));

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	return (new);
}
