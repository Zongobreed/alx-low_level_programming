#include "main.h"

/**
 * _realloc - reallocates memory block using malloc and free
 * @ptr: pointer to mem
 * @old_size: size of mem
 * @new_size: new size of mem
 *
 * Return: nu_ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nu_ptr;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	nu_ptr = malloc(new_size);
	if (!nu_ptr)
		return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			nu_ptr[i] = old_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			nu_ptr[i] = old_ptr[i];
	}
	free(ptr);
	return (nu_ptr);
}
