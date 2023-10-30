#include "main.h"

/**
 * read_textfile -function that reads a text file and prints it
 * @filename: the postion that will returned value
 * @letters: the value
 *
 * Return: 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int pf;
	ssize_t bytes;

	pf = open(filename, O_RDONLY);

	if (pf == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	bytes = read(pf, buf, letters);
	bytes = write(STDOUT_FILENO, buf, bytes);

	free(buf);
	close(pf);

	return (bytes);
}
