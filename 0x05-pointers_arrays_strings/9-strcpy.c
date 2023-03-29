#include "main.h"

/**
 * _strcpy - copy string
 * @dest: array destination
 * @src: array source
 *
 * Return: dest (succes)
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);
	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	return (dest);
}
