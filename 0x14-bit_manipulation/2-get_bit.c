#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: target number
 * @index: bit index
 *
 * Return: v_of_b
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int v_of_b;

	if (index > 63)
		return (-1);
	v_of_b = (n >> index) & 1;
	return (v_of_b);
}
