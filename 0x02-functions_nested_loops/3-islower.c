#include "main.h"

/**
 * _islower - prints lower case
 *
 * @c: parameter to be printed
 *
 * Return: 1 incase of a lower case
 * and 0 if otherwise
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
