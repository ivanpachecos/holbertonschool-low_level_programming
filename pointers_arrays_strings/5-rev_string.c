#include <string.h>
#include "main.h"

/**
  * rev_string - function to reverse
  * @s: text
  */

void rev_string(char *s)
{
	int length = strlen(s);
	int middle = length / 2;
	char tm;
	int i;

	for (i = 0; i < middle; i++)
	{
		tm = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = tm;
	}
}

