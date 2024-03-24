#ifndef _VARIADIC_FUNCTION_H_
#define _VARIADIC_FUNCTION_H_
#include <stdarg.h>
void print_numbers(const char *separator, const unsigned int n, ...);


typedef struct funckey
{
	void (*f)(va_list);
	char spec;
} funckey;
#endif
