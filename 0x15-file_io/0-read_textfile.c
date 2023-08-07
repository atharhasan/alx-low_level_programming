#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 *
 * @filename: the file that will read
 * @letters: the number of letters will printed
 *
 * Return:the actual number of letters it could read and print
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
