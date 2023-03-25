#include "main.h"

/**
 * _isupper - checks for letter case
 * @c: parameter to be checked
 * Return: 1 for upper case else 0
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
