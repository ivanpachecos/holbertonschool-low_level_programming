#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: pointer to the name of the file to create.
 * @text_content: pointer to the null terminated string to write to file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int wwrite;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (text_content)
	{
		wwrite = write(file_descriptor, text_content, _strlen(text_content));
		if (wwrite == -1)
			return (-1);
	}
	close(file_descriptor);

	return (1);
}

/**
 * _strlen - Function that returns the length of string.
 * @s: pointer to the null-terminated byte string to be examined.
 *
 * Return: The length of the null-terminated byte string s.
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
