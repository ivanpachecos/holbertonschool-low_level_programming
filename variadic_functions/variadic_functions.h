#ifndef VARIADICFUNCTIONSH
#define VARIADICFUNCTIONSH
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

int _putchar(char c);


/**
 * struct format_types - Struct format_types
 * @identifier: The conversion specifier
 * @f: The function pointer
 */

typedef struct funckey
{
	void (*f)(va_list);
	char spec;
} funckey;

#endif
