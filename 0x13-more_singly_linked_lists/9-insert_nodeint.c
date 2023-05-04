#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to initial node
 * @idx: target index
 * @n: input data
 *
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *nu;
	listint_t *interim = *head;

	nu = malloc(sizeof(listint_t));
	if (!nu || !head)
		return (NULL);
	nu->n = n;
	nu->next = NULL;
	if (idx == 0)
	{
		nu->next = *head;
		*head = nu;
		return (nu);
	}
	for (i = 0; interim && i < idx; i++)
	{
		if (i == idx - 1)
		{
			nu->next = interim->next;
			interim->next = nu;
			return (nu);
		}
		else
			interim = interim->next;
	}
	return (NULL);
}
