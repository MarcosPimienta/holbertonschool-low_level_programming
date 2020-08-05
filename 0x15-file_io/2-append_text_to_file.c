#include "holberton.h"

/**
 * append_text_to_file - create empty file.
 * @filename: - file to be opened.
 * @text_content: - content of text.
 * Return: int.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, i, cl;

	while (text_content && text_content[i])
		i++;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0664);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		w = write(fd, text_content, i);
		if (w < 0)
			return (-1);
	}

	cl = close(fd);
	if (cl < 0)
		return (-1);

	return (1);
}
