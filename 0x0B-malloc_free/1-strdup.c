#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - returns the string given as parameter
 * Return: malloc pointer
 * @str: the string given as parameter which will be duplicated
 */
char *_strdup(char *str)
{
	char *s;
	int length;
	int i;

	length = strlen(str);
	s = malloc((length + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	length = strlen(str);
	s = malloc((length) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= length; i++)
		{
			s[i] = str[i];
		}
		s[i] = '\0';
	}
	return (s);
}
