#include "main.h"

/**
 * _isalpha - checks for alphabets
 *
 * @c: function parameter
 *
 * Return: 1 incase of an alphabet
 * and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
