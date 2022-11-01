#include "main.h"
#include <stdio.h>

char *create_buffer(char *file);
void close_file(int fd);
/**
 * create_buffer - allocates 1024 bytes
 * @file: name of file buffer
 *
 * Return: pointer to newly allocated buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can not write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - close file descriptors
 * @fd: file descriptor to close
 */
void close_file(int fd)
{
	int d;

	d = close(fd);

	if (d == -1)
	{
	dprintf(STDERR_FILENO, "Error: cannot close fd %d\n", fd);
	exit(100);
	}
}

/**
 * main - cp content of a file to another file.
 * @argc: number of arguments
 * @argv: pointer to arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int from, to, a, b;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	a = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || a == -1)
		{
			dprintf(STDERR_FILENO, "Error: cannot read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		b = write(to, buffer, a);
		if (to == -1 || b == -1)
		{
			dprintf(STDERR_FILENO, "Error: cannot write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		a = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (a > o);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
