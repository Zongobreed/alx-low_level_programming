#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: initial node
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *interim = head;

	while (interim)
	{
		sum += interim->n;
		interim = interim->next;
	}
	return (sum);
}
