#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * @argc: the number of arguments
 * @argv: the array of commandline arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	(void)argv; /**
		      *unused parameter
		      */
	if (argc >= 1)
	{
		printf("%d", argc - 1);
	}
	printf("\n");
	return (0);
}
