#include "main.h"

/**
 * swap_int - swap the value of two different parameters
 * @a: parameter 1
 * @b: parameter 2
 *
 * Return: 0 (success)
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
