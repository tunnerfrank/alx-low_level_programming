#include <stdio.h>
#include "main.h"
/**
 * main - the entry point
 * @argc: the number of command line arguments
 * @argv: the array of cmdln arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s", argv[0]);
	}
	printf("\n");
	return (0);
}
