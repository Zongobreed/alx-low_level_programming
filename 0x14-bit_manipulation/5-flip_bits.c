#include "main.h"

/**
 * flip_bits - counts number of bit to flip
 * @n: initial number
 * @m: second number
 *
 * Return: bitflip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, bitflip = 0;
	unsigned long int latest;
	unsigned long int absolute = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		latest = absolute >> x;
		if (latest & 1)
			bitflip++;
	}
	return (bitflip);
}
