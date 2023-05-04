#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t link list
 * @head: pointer to initial element
 * @index: target node index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *interim = *head;
	listint_t *present = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(interim);
		return (1);
	}
	while (i < index - 1)
	{
		if (!interim || !(interim->next))
			return (-1);
		interim = interim->next;
		i++;
	}
	present = interim->next;
	interim->next = present->next;
	free(present);
	return (1);
}
