#include "main.h"

/**
 * str_concat - concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: concat
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, i2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = i2 = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[i2] != '\0')
		i2++;
	concat = malloc(sizeof(char) * (i + i2 + 1));
	if (concat == NULL)
		return (NULL);
	i = i2 = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2[i2] != '\0')
	{
		concat[i] = s2[i2];
		i++, i2++;
	}
	concat[i] = '\0';
	return (concat);
}
