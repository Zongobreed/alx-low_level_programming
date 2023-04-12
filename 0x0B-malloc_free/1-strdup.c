#include "main.h"

/**
 * _strdup - duplicates given string to a new mem space
 * @str: input string
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	char *ace;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	ace = malloc(sizeof(char) * (i + 1));
	if (ace == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		ace[j] = str[j];
	return (ace);
}
