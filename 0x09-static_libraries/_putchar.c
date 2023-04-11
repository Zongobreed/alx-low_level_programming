#include <unistd.h>

/**
 * _putchar - prints char c to stdout
 * @c: character
 *
 * Return: 1 (success) if not -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
