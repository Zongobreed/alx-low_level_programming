#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: character
 *
 * Return: 1 (success) if not 0
 */

int _isalpha(int c)
{
	return ((c > 64 && c < 91) || (c > 96 && c < 123));
}
