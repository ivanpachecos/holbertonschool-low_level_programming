#include "function_pointers.h"

/**
  * print_name - print name normal and uppercase.
  *
  * @name: string of a name.
  * @f: name assigned to the functions.
  */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
