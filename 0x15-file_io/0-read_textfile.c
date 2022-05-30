#include "main.h"

/**
 * read_textfile
 *
 * @filename: filename
 *  @letters: letter's number
 *
 *  Return: letter's number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, w;
	long int n;
	char buffer;

	buffer = malloc(sizeof(char) * (letters + 1));

	if (!buffer)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	n = read(fd, buf, letters);
	close(fd);
	if (n == -1)
		return (0);
	buffer[letters] = '\0';

	w = write(STDOUT_FILENO, buf, n);
	free(buffer);
	if (w == -1)
		return (0);

	return (n);
}



