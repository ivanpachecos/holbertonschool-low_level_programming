#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: variable pointer
 * @letters: size letter
 * Return: actual number of letters it could read and print.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, len, wr;
	char *buffer;

	buffer = (char *)malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL && filename == NULL)
		return (0);

	fd = open("Requiescat", O_RDONLY);

	if (fd == -1)
		return (0);

	len = read(fd, buffer, letters);

	wr = write(STDOUT_FILENO, buffer, len);

	close(fd);

	return (wr);
}

