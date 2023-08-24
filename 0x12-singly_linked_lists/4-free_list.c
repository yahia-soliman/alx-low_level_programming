#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a linked list
 * @head:   first node of the list
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
