#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * str_concat - concatenates two strings.
  *
  * @s1: string 1.
  * @s2: string 2.
  *
  * Return: A pointer the has two concatenated value stored in it.
  */

char *str_concat(char *s1, char *s2)
{
	int len_s1 = 0;
	int len_s2 = 0;
	int len_result, i, j;
	char *strCo;

	/*s1 or s2 is caratecter empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*length of each of the strings passed*/
	while (s1[len_s1] != '\0')
		len_s1++;

	while (s2[len_s2] != '\0')
		len_s2++;

	/*sum of two string including the null caracter*/
	len_result = len_s1 + len_s2 + 1;

	/*point to a newly allocated space in memory*/
	strCo = (char *)malloc(len_result * sizeof(char));

	if (strCo == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		strCo[i] = s1[i];

	for (j = 0; j < len_s2; j++)
		strCo[len_s1 + j] = s2[j];

	strCo[len_result - 1] = '\0';

	return (strCo);
}
