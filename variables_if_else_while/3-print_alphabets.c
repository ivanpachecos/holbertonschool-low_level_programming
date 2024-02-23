#include <stdio.h>

/**
 * main - Alphabet lowercase and uppercase with function putchar
 * Return: (value =0)
  */

int main(void)
{
	/*variables lowercase and uppercase*/
	int a = 'a';
	int A = 'A';
	/*Loop while putchar alphabet*/
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
