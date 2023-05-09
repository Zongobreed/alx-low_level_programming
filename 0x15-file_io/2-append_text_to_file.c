#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to name of the file
 * @text_content: input string
 *
 * Return: 1 (success) if not -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int opn, wrt, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	opn = open(filename, O_WRONLY | O_APPEND);
	wrt = write(opn, text_content, len);
	if (opn == -1 || wrt == -1)
		return (-1);
	close(opn);
	return (1);
}
