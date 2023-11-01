#include "main.h"

/**
 * error_file - checks for if file can be opened
 * @file_i: initial file
 * @file_d: destination file
 * @argv: argument vector
 */

void error_file(int file_i, int file_d, char *argv[])
{
	if (file_i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - checks code for students of Holberton
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int file_i, file_d, e_close;
	ssize_t xch, xwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_i file_d");
		exit(97);
	}
	file_i = open(argv[1], 0_RDONLY);
	file_d = open(argv[2], O_CREAT | 0_WRONLY | O_TRUNC, 0664);
	error_file(file_i, file_d, argv);
	xch = 1024;
	while (xch == 1024)
	{
		xch = read(file_i, buf, 1024);
		if (xch == -1)
			error_file(-1, 0, argv);
		xwr = write(file_d, buf, xch);
		if (xwr == -1)
			error_file(0, -1, argv);
	}
		e_close = close(file_i);
		if (e_close == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_i);
			exit(100);
		}
		e_close = close(file_d);
		if (e_close == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n" file_i);
			exit(100);
		}
		return (0);
}
