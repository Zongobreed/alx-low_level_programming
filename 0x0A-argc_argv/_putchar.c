#include "main.h"

/**
 * _putchar - prints character c to stdout
 * @c: input character
 *
 * Return: 1 (success) if not -1 
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
