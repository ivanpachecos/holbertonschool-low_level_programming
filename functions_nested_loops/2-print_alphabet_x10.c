#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	/*start from 1 to 10 with while loop*/
	int i = 1;
	char j;

	while (i <= 10)
	{
		i++;
		j = 'a';
		/*prints all alphabet*/
		while (j <= 'z')
		{
			putchar(j);
			j++;
		}
		putchar('\n');
	}
}
