#include "main.h"

/**
 * append_text_to_file - appends text to the end of the file
 * @filename: target filename
 * @text_content: input content
 *
 * Return: 1 (success) or -1 if failure or file not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x;
	int xlr;
	int xwr;

	if (!filename)
		return (-1);
	if (text_content)
	{
		for (xlr = 0 ; text_content[xlr] ; xlr++)
			;
		xwr = write(x, text_content, xlr);
		if (xwr == -1)
			return (-1);
	}
	close(x);
	return (1);
}
