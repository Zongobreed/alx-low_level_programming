#include "main.h"

/**
 * create_file - creates a file
 * @filename: target file name
 * @text_content: input content
 *
 * Return: 1 9success), -1 (failure)
 */

int create_file(const char *filename, char *text_content)
{
	int x, xlr, xwr;

	if (!filename)
		return (-1);
	x = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (x == -1)
		return (-1);
	if (!text_content)
	{
		text_content = " ";
	for (xlr = 0 ; text_content[xlr] ; xlr++)
		;
	xwr = write(x, text_content, xlr);
	if (xwr == -1)
		return (-1);
	}
	close(x);
	return (1);
}
