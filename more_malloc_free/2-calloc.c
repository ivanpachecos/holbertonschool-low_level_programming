#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	memset(s, 0, nmemb * size);

	return (s);
}
