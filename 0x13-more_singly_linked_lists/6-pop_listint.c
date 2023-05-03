#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to initial element
 *
 * Return: numba (success) if not 0
 */

int pop_listint(listint_t **head)
{
	listint_t *interim;
	int numba;

	if (!head || !*head)
		return (0);
	numba = (*head)->n;
	interim = (*head)->next;
	free(*head);
	*head = interim;
	return (numba);
}
