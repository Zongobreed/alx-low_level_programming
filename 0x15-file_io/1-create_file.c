#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to filename to create
 * @text_content: pointer to input string
 *
 * Return: 1 (success) if not -1
 */

int create_file(const char *filename, char *text_content)
{
	int file_d, write_e, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_e = write(file_d, text_content, len);
	if (file_d == -1 || write_e == -1)
		return (-1);
	close(file_d);
	return (1);
}
