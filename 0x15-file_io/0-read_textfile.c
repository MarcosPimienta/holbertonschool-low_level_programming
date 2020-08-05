#include "holberton.h"

/**
 * read_textfile - reads files.
 * @filename: - file to be opened.
 * @letters: - strlen.
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n_bytes, tmp;
	char *buf;

	buf = malloc(sizeof(char) * letters);

	if (buf == 0)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}

	n_bytes = read(fd, buf, letters);
	close(fd);
	if (n_bytes == -1)
	{
		free(buf);
		return (0);
	}
	tmp = write(STDOUT_FILENO, buf, (ssize_t)n_bytes);
	if (tmp == -1)
	{
		free(buf);
		return (0);
	}
	if (n_bytes != tmp)
	{
		free(buf);
		return (0);
	}

	return (n_bytes);
}
