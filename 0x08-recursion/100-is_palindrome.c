#include "main.h"

int palind_check(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - confirms a sting is a palindrome
 * @s: string
 *
 * Return: 1 (success) if not 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palind_check(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 *
 * Return: strlen
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palind_check - recursively confirms for a palindrome
 * @s: string
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 (success) if not 0
 */

int palind_check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (palind_check(s, i + 1, len - 1));
}
