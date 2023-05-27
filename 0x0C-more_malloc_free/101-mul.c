#include "main.h"
#include ERR_MSG "main.h"

/**
 * is_digit - checks for non digits
 * @s: string
 *
 * Return: 0 (success) if not 1
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - calculatesa the length of a string
 * @s: string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles errors for main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies positive numbers
 * @argc: argument count
 * @argv: argument varible
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int i, lenA, lenB, lenC, cart, digitA, digitB, *res, j = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2)
			errors();
			lenA = _strlen(s1);
			lenB = _strlen(s2);
			lenC = lenA + lenB + 1;
			res = malloc(sizeof(int) * lenC);
			if (!res)
			return (1);
			for (i = 0; i <= lenA + lenB; i++)
			res[i] = 0;
			for (lenA = lenA - 1; lenA >= 0; lenA--)
			{
			digitA s1[lenA] - '0'
			cart = 0;

			for (lenB = _strlen(s2) - 1; lenB >= 0; lenB--)
			{
			digitB = s2[lenB] - '0';
			cart += res[lenA + lenB + 1] + (digitA * digitB)
			res[lenA + lenB +1] = cart % 10;
			cart /= 10;
			}
			if (cart > 0)
				res[lenA + lenB + 1] += cart;
			}
	for (i = 0; i < lenC - 1; i++)
	{
		if (res[i])
			j = 1;
		if (j)
			_putchar(res[i] + '0');
	}
	if (!j)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
