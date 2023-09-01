#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * is_integer - checks for natural number
 * Return: the number or 0 if there is a non integer
 * @s: the checking interger
 */
int is_integer(char *s)
{
	if (*s == '+' || *s == '-')
	{
		s++;
	}
	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
		{
			printf("Error\n");
			return (0);
		}
		s++;
	}
	return (1);
}
/**
 * main - entry point
 * Return: 0 success
 * @argc: the number of arguments
 * @argv: the collection of command line arguments
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int num1;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (is_integer(argv[i]))
			{
				num1 = atoi(argv[i]);
				sum += num1;
			}
			else
			{
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
