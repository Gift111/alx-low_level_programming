#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @letters: number of letters printed
 * @filename: name of file
 * return: expected amount of bytes
 * otherwise return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t drd, dwd;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}

	drd = read(fd, buff, letters);
	close(fd);
	if (drd == -1)
	{
		free(buff);
		return (0);
	}
	dwd = write(STDOUT_FILENO, buff, drd);
	free(buff);
	if (drd != dwd)
		return (0);
	return (dwd);
}
