#include "main.h"
/**
 * create_file - creates a new file
 * @filename:    with the file name
 * @text_content: to write into it.
 *
 * Return: -1 on error 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, r = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
	while (*(text_content + r))
		r++;

	r = write(fd, text_content, r);
	}
	close(fd);
	if (r < 0)
		return (-1);
	return (1);
}
