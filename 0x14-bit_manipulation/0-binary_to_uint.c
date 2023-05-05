#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: target string
 *
 * Return: un_int
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int un_int = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		un_int = 2 * un_int + (b[i] - '0');
	}
	return (un_int);
}
