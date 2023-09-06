#include "main.h"
/**
 * read_textfile - reads and prints the content of a file
 * @filename:      using the file name
 * @letters:       and the number of letters to print.
 *
 * Return: the number of sucessfully printed letters
 *         or  0 if any error occured
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r;
	int fd;
	char *s;

	if (filename == NULL || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	s = malloc(sizeof(*s) * letters);
	if (!s)
		return (0);
	r = read(fd, s, letters);
	if (r < 0)
	{
		free(s);
		return (0);
	}
	if (letters > (size_t)r)
		letters = r;
	r = write(STDOUT_FILENO, s, letters);
	if (r < 0)
	{
		free(s);
		return (0);
	}
	free(s);
	fd = close(fd);
	if (fd < 0)
		return (0);
	return (r);
}
