#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer
 * @str: string parameter
 *
 * Return: nu (success) if not NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nu;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	nu = malloc(sizeof(list_t));
	if (!nu)
		return (NULL);
	nu->str = strdup(str);
	nu->len = len;
	nu->next = NULL;
	if (*head == NULL)
	{
		*head = nu;
		return (nu);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = nu;
	return (nu);
}
