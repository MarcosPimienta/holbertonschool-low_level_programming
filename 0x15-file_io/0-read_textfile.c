#include "holberton.h"

/**
 * read_textfile - reads files.
 * @filename: - file to be opened.
 * @letters: - strlen.
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes, tmp;
	char *buf;

	buf = malloc(sizeof(char) * letters);

	if (buf == 0)
	return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	bytes = read(fd, buf, letters);
	tmp = write(STDOUT_FILENO, buf, (ssize_t)bytes);
	if (tmp == -1)
	{
		free(buf);
		return (0);
	}
	if (bytes != tmp)
	{
	return (0);
	free(buf);
	}

	close(fd);

return (bytes);
}
