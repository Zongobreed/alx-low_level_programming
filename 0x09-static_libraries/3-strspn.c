#include "main.h"

/**
 * _strspn - main entry
 * @s: input parameter
 * @accept: input parameter
 *
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0;
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				j++;
				break;
			}
			else if (accept[k + 1] == '\0')
				return (j);
		}
		s++;
	}
	return (j);
}

