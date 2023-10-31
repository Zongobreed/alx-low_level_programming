#include "main.h"

/**
 * read_textfile -  reads and prints a text file
 * @filename: target filename
 * @letters: letters count to print
 *
 * Return: number of letter(success). and 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t xrd, xwr;
	char *buffer;

	if (!filename)
		return (0);
	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);
	xrd = read(x, buffer, letters);
	xwr = write(STDOUT_FILENO, buffer, xrd);
	close(x);
	free(buffer);
	return (xwr);
}
