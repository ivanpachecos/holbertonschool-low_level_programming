#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>

/**
 * append_text_to_file - that appends text at the end of a file
 * @filename: variable pointer
 * @text_content: content file
 * Description: function that appends text at the end of a file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, fd;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (filename[i] != '\0')
		i++;

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	write(fd, text_content, i);

	write(fd, "\n", 1);

	close(fd);
	return (1);
}
