#include "function_pointers.h"

/**
 * int_index - checks for integers
 * @array: input array
 * @size: element size
 * @cmp: pointer to given function
 *
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
