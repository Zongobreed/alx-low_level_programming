#include "main.h"

/**
 * _memset - fills a block of memory with a given value
 * @s: address of memory
 * @b: given value
 * @n: change in bytes
 *
 * Return: changed array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
