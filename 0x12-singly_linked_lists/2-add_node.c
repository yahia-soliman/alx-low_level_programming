#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node at the beggining of a list
 * @head: pointer to a holder of first node location
 * @str:  the value of newNode->str
 * Return: at success returns pointer to new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode)
	{
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;
	}

	return (newNode);
}
