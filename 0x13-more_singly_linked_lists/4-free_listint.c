#include "lists.h"

/**
 * free_listint -  frees a listint_t list
 * @head: list parameter
 */

void free_listint(listint_t *head)
{
	listint_t *interim;

	while (head)
	{
		interim = head->next;
		free(head);
		head = interim;
	}
}
