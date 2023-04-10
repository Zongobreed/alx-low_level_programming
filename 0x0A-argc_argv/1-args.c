#include "main.h"

/**
 * main - prints the number of arg passed to it
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
