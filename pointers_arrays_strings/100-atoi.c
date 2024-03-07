/**
  * _atoi - all number in a string
  * @s: string
  * Return: integer
  */
int _atoi(char *s)
{
	int index = 0;
	unsigned int ni = 0;
	int i = 1;
	int digit = 0;

	while (s[index])
	{
		if (s[index] == 45)
		{
			i *= -1;
		}

		while (s[index] >= 48 && s[index] <= 57)
		{
			digit = 1;
			ni = (ni * 10) + (s[index] - '0');
			index++;
		}

		if (digit == 1)
		{
			break;
		}

		index++;
	}

	ni *= i;
	return (ni);
}

