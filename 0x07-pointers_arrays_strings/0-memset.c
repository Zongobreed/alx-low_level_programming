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
	int i = 0;

	for (; n > 0 ; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
