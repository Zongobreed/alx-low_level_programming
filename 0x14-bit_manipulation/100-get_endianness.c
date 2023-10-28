#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: 0, or 1
 */

int get_endianness(void)
{
	int y;
	char *z;

	y = 1;
	z = (char *)&y;
	return (*z);
}
