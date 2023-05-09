#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: target file
 * @letters: number of letters
 *
 * Return: w (success) if not 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bff;
	ssize_t file_d;
	ssize_t w;
	ssize_t t_read;

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	bff = malloc(sizeof(char) * letters);
	t_read = read(file_d, bff, letters);
	w = write(STDOUT_FILENO, bff, t_read);
	free(bff);
	close(file_d);
	return (w);
}
