#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints auto code
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int byt, i;
	char *ray;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byt = atoi(argv[1]);
	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ray = (char *)main;
	for (i = 0; i < byt; i++)
	{
		if (i == byt - 1)
		{
			printf("%02hhx\n", ray[i]);
			break;
		}
		printf("%02hhx", ray[i]);
	}
	return (0);
}
