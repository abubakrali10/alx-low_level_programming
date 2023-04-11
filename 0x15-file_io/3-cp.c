#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUF_SIZE 1024

/**
 * error_exit - prints an error message and exits with the given code
 * @code: exit code
 * @format: error message format
 * @...: arguments for the error message format
 */
void error_exit(int code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, "Error: ");
	vdprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(code);
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, a non-zero value on failure
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, len;
	char buf[BUF_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Can't write to %s\n", argv[2]);

	while ((len = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		if (write(fd_to, buf, len) != len)
			error_exit(99, "Can't write to %s\n", argv[2]);
	}

	if (len == -1)
		error_exit(98, "Can't read from file %s\n", argv[1]);

	if (close(fd_from) == -1)
		error_exit(100, "Can't close fd %d\n", fd_from);

	if (close(fd_to) == -1)
		error_exit(100, "Can't close fd %d\n", fd_to);

	return (0);
}
