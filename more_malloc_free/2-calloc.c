#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
   	unsigned int total_size, i; 
	char *ptr;
	if (nmemb == 0 || size == 0)
		return NULL;

	total_size = nmemb * size;

	p = (char *)malloc(total_size);
    
	if (p == NULL)
		return NULL; 
   
	for (i = 0; i < total_size; i++) {
		p[i] = 0;
	}

 
	return p;
}
