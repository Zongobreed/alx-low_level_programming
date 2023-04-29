#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer
 * @str: string to add
 *
 * Return: *head (success) if not NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nu;
	unsigned int len = 0;

	while (str[len])
		len++;
	nu = malloc(sizeof(list_t));
	if (!nu)
		return (NULL);
	nu->str = strdup(str);
	nu->len = len;
	nu->next = (*head);
	(*head) = nu;
	return (*head);
}
