#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Return: 0 success
 * @argc: the number of arguments
 * @argv: the array holding the arguments
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
