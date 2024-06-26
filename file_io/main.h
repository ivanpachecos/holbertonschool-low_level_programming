#ifndef _IO_HEAD_
#define _IO_HEAD_

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _strlen(const char *s);
char *create_buffer(char *file);
void close_file(int file_descriptor);
int main(int argc, char *argv[]);

#endif
