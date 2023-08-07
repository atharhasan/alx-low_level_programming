#include "main.h"

/**
 * create_file - function that creates file
 *
 * @filename: the file that will read
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int pf, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		len = strlen(text_content);

	pf = open(fiilename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	w = write(pf, text_content, len);

	if (pf == -1 || w == -1)
		return (-1);

	close(pf);

	return (1);
}
