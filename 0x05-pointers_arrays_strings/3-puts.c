#include "main.h"

/**
 * _puts - function that prints strings
 * @str: parameter
 *
 * Return: 0 (success)
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
