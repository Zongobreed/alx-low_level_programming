#include "main.h"

/**
 * _memset - fills a block of memory with a value
 * @s: memory to be filled
 * @b: value
 * @n: change in bytes
 *
 * Return: s (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0 && n > 0 ; i++, n--;)
	{
		s[i] = b;
	}
	return (s);
}
