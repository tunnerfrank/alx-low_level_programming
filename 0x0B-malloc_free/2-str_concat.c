#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - combines two strings
 * Return: the pointr uniting both strings
 * @s1: the first string
 * @s2: the second string
 */
char *str_concat(char *s1, char *s2)
{
	int length1;
	int length2;
	char *s;
	int i = 0;
	int j = 0;
	int b;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	length1 = strlen(s1);
	length2 = strlen(s2);
	b = length1 + length2;
	s = malloc((length1 + length2 + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < b; i++)
		{
			s[i] = s1[i];
		}
		for (j = 0; j < b; j++)
		{
			s[length1 + j] = s2[j];
		}
	}
	s[length1 + length2] = '\0';
	return (s);
}
