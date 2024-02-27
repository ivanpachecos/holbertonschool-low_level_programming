#include "main.h"

/**
  * times_table - multiplication from 0 to 9
  * Return: nothing
  */
void times_table(void)
{
	/*start variable of logtiud = 9, j multiplied value and result multiplied*/
	int i, j, result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (result < 10 && j != 0)
			{
				_putchar(' ');
			}
			else if (result >= 10)
			{
				_putchar(result / 10 + '0');
			}
			_putchar(result % 10 + '0');
		}
		_putchar('\n');
	}
}
