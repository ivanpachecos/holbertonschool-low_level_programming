#include <stddef.h>
#ifndef _SAMPLE_HEADER_H_
#define _SAMPLE_HEADER_H_
int _putchar(char);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif
