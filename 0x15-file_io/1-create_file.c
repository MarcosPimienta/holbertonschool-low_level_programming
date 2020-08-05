#include "holberton.h"

/**
 * create_file - create empty file.
 * @filename: - file to be opened.
 * @text_content: - content of text.
 * Return: int.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, i = 0, cl;

	while (text_content && text_content[i])
		i++;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		w = write(fd, text_content, i);
		if (w < 0)
			return (-1);
	}
	else
	{
		w = write(fd, "", i);
	}

	cl = close(fd);
	if (cl < 0)
		return (-1);

	return (1);
}
