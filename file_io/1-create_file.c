#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
  *
  *
  *
  *
  *
  *
  */
int create_file(const char *filename, char *text_content)
{
	int len = 0, fd;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[len] != '\0')
		len++;

	fd = open(filename, O_CREAT, O_WRONLY, O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	
	write(fd, text_content, len);
	
	close(fd);

	return (1);
}
