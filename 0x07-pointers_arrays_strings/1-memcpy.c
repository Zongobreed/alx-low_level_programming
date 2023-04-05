#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: source memory
 * @dest: destination memory
 * @n: number of bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i ; r++)
	{
		src[r] = dest[r];
		n--;
	}
	return (dest);
}
