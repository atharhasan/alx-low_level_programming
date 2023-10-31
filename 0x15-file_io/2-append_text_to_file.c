#include "main.h"

/**
 * append_text_to_file - that creates a file
 * @filename: the postion that will returned value
 * @text_content: the value
 *
 * Return: 1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int FOpen;
	ssize_t byteSize;

	FOpen = open(filename, O_WRONLY | O_APPEND);

	if (FOpen == -1)
		return (-1);

	if (text_content != NULL)
	{
		byteSize = write(FOpen, text_content, strlen(text_content));
		if (byteSize == -1)
		{
			close(FOpen);
			return (-1);
		}
		close(FOpen);
	}
	close(FOpen);
	return (1);
}
