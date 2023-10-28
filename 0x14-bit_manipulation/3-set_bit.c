#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: target number
 * @index: target index
 *
 * Return: 1 if success, or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitset;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	bitset = 1 << index;
	*n = *n | bitset;
	return (1);
}
