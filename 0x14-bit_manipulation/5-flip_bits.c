#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to
 * get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: tally
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, tally = 0;
	unsigned long int immediate;
	unsigned long int excl = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		immediate = excl >> i;
		if (immediate & 1)
			tally++;
	}
	return (tally);
}
