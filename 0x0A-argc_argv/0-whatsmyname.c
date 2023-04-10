#include "main.h"

/**
 * main - prints name of a program
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
