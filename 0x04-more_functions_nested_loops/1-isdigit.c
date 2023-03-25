#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: parameter to be checked
 * Return: 1 for digit else 0
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
