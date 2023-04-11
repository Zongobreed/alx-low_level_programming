#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: span
 */

int _strlen(char *s)
{
	int span = 0;

	while (*s != '\0')
	{
		span++;
		s++;
	}
	return (span);
}
