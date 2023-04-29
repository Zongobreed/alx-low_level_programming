#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer
 *
 * Return: ne
 */

size_t list_len(const list_t *h)
{
	size_t ne = 0;

	while (h)
	{
		ne++;
		h = h->next;
	}
	return (ne);
}
