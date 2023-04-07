#include "main.h"

/**
 * _strlen_recursion - returns the length of a sring
 * @s: string
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int span = 0;

	if (*s)
	{
		span++;
		span += _strlen_recursion(s + 1);
	}
	return (span);
}
