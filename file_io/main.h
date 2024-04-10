#ifndef _IO_HEAD_
#define _IO_HEAD_

#include <stddef.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
#endif
