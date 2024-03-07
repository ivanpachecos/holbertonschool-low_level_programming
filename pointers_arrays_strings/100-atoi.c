/**
  * _atoi - all number in a string
  * @s: string
  * Return: integer
  */

int _atoi(char *s)
{
	int i = 0;
	int j = 1;
	int digit_found = 0;
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == '-')
		{
			j *= -1;
		}
		while (s[index] >= '0' && s[index] <= '9')
		{
			digit_found = 1;
			i = (i * 10) + (s[index] - '0');
			index++;
		}
		if (digit_found == 1)
			break;
	}
	i *= j;

	return (i);
}
