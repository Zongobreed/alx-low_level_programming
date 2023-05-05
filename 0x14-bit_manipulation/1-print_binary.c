#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: target number
 */

void print_binary(unsigned long int n)
{
	int i, tally = 0;
	unsigned long int immediate;

	for (i = 63; i >= 0; i++)
	{
		immediate = n >> i;
		if (immediate & 1)
		{
			_putchar('1');
			tally++;
		}
		else if (tally)
			_putchar('0');
	}
	if (!tally)
		_putchar('0');
}
