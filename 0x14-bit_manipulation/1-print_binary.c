#include "main.h"

/**
 * _pow - calculates base power
 * @bs: base of the exponent
 * @pw: power of the exponent
 *
 * Return: numb
 */

unsigned long int _pow(unsigned int bs, unsigned int pw)
{
	unsigned long int numb;
	unsigned int x;

	numb = 1;
	for (x = 1; x <= pw; x++)
		numb *= bs;
	return (numb);
}

/**
 * print_binary - prints in binaries
 * @n: target number
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int div, check;
	char tag;

	tag = 0;
	div = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		check = n & div;
		if (check == div)
		{
			tag = 1;
			_putchar('1');
		}
		else if (tag == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
