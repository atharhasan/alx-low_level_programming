#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 *
 * @filename: the file that will read
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int pf, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	pf = open(filename, O_RDWR | O_APPEND, 0600);
	w = write(pf, text_content, len);

	if (pf == -1 || w == -1)
		return (-1);

	close(pf);
	return (1);
}
