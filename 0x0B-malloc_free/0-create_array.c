#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array
 * @size: the size of memory allocation
 * @c: the character to be initialized as the first of the array
 * Return: the array pointing to the dynamic memory allocated
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc((size + 1) * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			s[i] = c;
		}
	}
	s[i] = '\0';
	return (s);
}
