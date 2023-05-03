#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t numba = 0;

	while (h)
	{
		numba++;
		h = h->next;
	}
	return (numba);
}
