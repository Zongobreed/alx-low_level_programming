#include "main.h"

/**
 * _isupper - check for uppercase
 * @c: char
 *
 * Return: 0 if not 1
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
