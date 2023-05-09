#include "main.h"

char *create_buffer(char *file);
void clode_file(int fd);

/**
 * create_buffer - allocates bytes for a buffer
 * @file: name of file which their chars are stored by buffer
 *
 * Return: bff
 */

char *create_buffer(char *file)
{
	char *bff;

	bff = malloc(sizeof(char) * 1024);
	if (bff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (bff);
}

/**
 * close_file - closes file descriptors
 * @fd: target file descriptor
 */

void close_file(int fd)
{
	int cls;

	cls = close(fd);
	if ((cls = -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies contents from a file to another
 * @argc: argument count
 * @argv: argument variables
 *
 * Return: 0
 *
 * Description: if the argc is incorrect - exit code 97
 * if file_from is not readable or doesn't exist - exit code 98
 * if file can't be be written to or created - exit code 99
 * if file_from and file_to can't be closed - exit code 100
 */

int main(int argc, char *argv[])
{
	int f_from, f_to, reed, wrt;
	char *bff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	bff = create_buffer(argv[2]);
	f_from = open(argv[1], O_RDONLY);
	reed = read(f_from, bff, 1024);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if ((f_from == -1) | (reed == -1))
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(bff);
			exit(98);
		}
		wrt = write(f_to, bff, reed);
		if (f_to == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(bff);
			exit(99);
		}
		reed = read(f_from, bff, 1024);
		f_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (reed > 0);
	free(bff);
	close_file(f_from);
	close_file(f_to);
	return (0);
}
