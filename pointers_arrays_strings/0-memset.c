#include "main.h"

/**
  * _memset - fills memory with a constant byte
  * @s: pointer of memory
  * @b: byte
  * @n: longitud
  */

char *_memset(char *s, char b, unsigned int n)
{
	/*fills s of the memory*/
	unsigned int index;

	for (index = 0; index < n; index++)
		/*replace value*/
		s[index] = b;

	return (s);
}
