#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{
	int len_s1 = 0;
	int len_s2 = 0;
	int len_result, i, j;
	char *strCo;
	
	/*s1 or s2 return null*/
	if (s1 == NULL && s2 == NULL)
		return NULL;
    
	while (s1[len_s1] != '\0')
		len_s1++;
	
 
	while (s2[len_s2] != '\0')
		len_s2++;

 
	len_result = len_s1 + len_s2 + 1;
    
	strCo = (char*)malloc(len_result * sizeof(char));
   
	if (strCo == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		strCo[i] = s1[i];
	
	for (j = 0; j < len_s2; j++)
		strCo[len_s1 + j] = s2[j];
 
	strCo[len_result - 1] = '\0';

	return strCo;
}
