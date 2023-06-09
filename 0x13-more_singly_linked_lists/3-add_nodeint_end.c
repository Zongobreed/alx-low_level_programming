#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to initial element
 * @n: input data
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nu;
	listint_t *interim = *head;

	nu = malloc(sizeof(listint_t));
	if (!nu)
		return (NULL);
	nu->n = n;
	nu->next = NULL;
	if (*head == NULL)
	{
		*head = nu;
		return (nu);
	}
	while (interim->next)
		interim = interim->next;
	interim->next = nu;
	return (nu);
}
