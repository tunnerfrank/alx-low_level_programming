#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - allocates a 2d array
 * Return: the pointer
 * @width: the amount of width
 * @height: th amount of height
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **s;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	s = (int **)malloc(sizeof(int *) * height);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = (int *)malloc(sizeof(int) * width);
		if (s[i] == NULL)
		{
			for (j = 0; j >= 0; j++)
			{
				free(s[j]);
			}
			free(s);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
	free(s);
}

