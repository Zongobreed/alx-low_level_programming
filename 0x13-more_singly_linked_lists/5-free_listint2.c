#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to target list
 */

void free_listint2(listint_t **head)
{
	listint_t *interim;

	if (head == NULL)
		return;
	while (*head)
	{
		interim = (*head)->next;
		free(*head);
		*head = interim;
	}
	*head = NULL;
}
