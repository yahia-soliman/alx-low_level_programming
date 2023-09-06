#include "main.h"

void error(int no, char *f);
void error100(int fd);

/**
 * main - program to copy a file content
 * @argc: number of command line strings
 * @argv: array  of command line strings
 *
 * Return: 0 on success or errno if else
 */
int main(int argc, char **argv)
{
	int fd1, fd2, ret;
	char buf[BUFFER_SIZE];

	if (argc != 3)
		error(97, argv[0]);

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 < 0)
		error(98, argv[1]);
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd1 < 0)
		error(99, argv[2]);

	ret = BUFFER_SIZE;
	while (ret == BUFFER_SIZE)
	{
	ret = read(fd1, buf, BUFFER_SIZE);
	if (ret < 0)
		error(98, argv[1]);

	ret = write(fd2, buf, ret);
	if (ret < 0)
		error(99, argv[2]);
	}

	ret = close(fd1);
	if (ret < 0)
		error100(fd1);
	ret = close(fd2);
	if (ret < 0)
		error100(fd2);

	return (0);
}

/**
 * error - prints the errors
 * @no: error number
 * @f:  name of a file
 */
void error(int no, char *f)
{
	char *str[] = {
	"Usage: cp file_from file_to\n",
	"Error: Can't read from file %s\n",
	"Error: Can't write to %s\n",
	};

	dprintf(STDERR_FILENO, str[no - 97], f);

	exit(no);
}

/**
 * error100 - handles close error
 * @fd: file discreptor
 */
void error100(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
