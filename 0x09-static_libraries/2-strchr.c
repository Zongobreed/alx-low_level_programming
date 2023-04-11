#include "main.h"
#include <stddef.h>

/**
 * _strchr - main entry
 * @s: input parameter
 * @c: input parameter
 *
 * Return: 0
 */

char *strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
