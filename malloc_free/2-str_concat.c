#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{
	char *s;
	int lenS1 = strlen(s1);
	int lenS2 = strlen(s2);

	int resultLen = lenS1 + lenS2 + 1;

	s = (char*)malloc(resultLen * (sizeof(char)));
	if (s == NULL)
		return (NULL);
	strcpy(s, s1);
	strcat(s, s2);

	return (s);
}
