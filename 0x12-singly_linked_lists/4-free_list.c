#include "lists.h"

/**
 * free_list -  frees a list_t list.
 * @head: list to freed
 */

void free_list(list_t *head)
{
	list_t *interim;

	while (head)
	{
		interim = head->next;
		free(head->str);
		free(head);
		head = interim;
	}
}
