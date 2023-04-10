#include "main.h"
#include <stdlib.h>

/**
 * main - prints min number of coins to make change
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: 0 (success) if not 1
 */

int main(int argc, char *argv[])
{
	int num, a, res, coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	res = 0;
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (a = 0; a < 5 && num >= 0; a++)
	{
		while (num >= coins[a])
		{
			res++;
			num -= coins[a];
		}
	}
	printf("%d\n", res);
	return (0);
}
