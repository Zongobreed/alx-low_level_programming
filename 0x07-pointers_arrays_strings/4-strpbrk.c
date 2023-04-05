#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: intput parameter
 * @accept: input parameter
 *
 * Return: 0 (success)
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0 ; accept[i] ; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
