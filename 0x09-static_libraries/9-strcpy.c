#include "main.h"

/**
 * _strcpy - copies a string value
 * @dest: destination string
 * @src: source string
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for (; b < a; b++)
	{
		dest[b] = src[b]
	}
	dest[a] = '\0';
	return (dest);
}
