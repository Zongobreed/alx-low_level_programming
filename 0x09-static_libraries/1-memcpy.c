#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory
 * @src: source memory
 * @n: change in bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n, r;

	for (r = 0; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
