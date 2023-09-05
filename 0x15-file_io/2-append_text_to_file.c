#include "main.h"
/**
 * append_text_to_file - appends
 * @text_content:      this text
 * @filename:       to this file
 *
 * Return: -1 on error 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, r = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND,
			S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
	while (*(text_content + r))
		r++;

	r = write(fd, text_content, r);
	if (r < 0)
		return (-1);
	}
	r = close(fd);
	if (r < 0)
		return (-1);
	return (1);
}
