#include "main.h"

/**
 * _strlen - return the length of the string
 * @s: string that function prints its length
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
