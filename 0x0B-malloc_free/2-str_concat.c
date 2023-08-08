#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *str_concat- concatenetes teo strings
 *
 *@s1:destinattion string
 *@s2:source  string
 *Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0;
	int dest = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	dest = i + j;
	s = malloc((sizeof(char) * dest) + 1);

	if (s == NULL)
		return (NULL);

	j = 0;

	while (k < dest)
	{
		if (k <= i)
			s[k] = s1[k];

		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}
		k++;
	}
	s[k] = '\0';
	return (s);
}
