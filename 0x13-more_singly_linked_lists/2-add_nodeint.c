#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list
 * @head: pointer to the initial node
 * @n: input data
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nu;

	nu = malloc(sizeof(listint_t));
	if (!nu)
		return (NULL);
	nu->n = n;
	nu->next = *head;
	*head = nu;
	return (nu);
}
