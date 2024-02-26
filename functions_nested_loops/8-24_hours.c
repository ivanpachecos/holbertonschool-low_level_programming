#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	/*start values*/
	int h, m;
	int hours = 24;
	int minutes = 60;

	/*first loop for hours*/
	for (h = 0; h < hours; h++)
	{
		/*second for minutes and prints hours, minutes*/
		for(m = 0; m < minutes; m++)
		{
			_putchar('0' + h / 10);
			_putchar('0' + h % 10);
			_putchar(':');
			_putchar('0' + m / 10);
			_putchar('0' + m % 10);
			_putchar('\n');
		}
	}
}

