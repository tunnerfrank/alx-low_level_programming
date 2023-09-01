#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: the number of main arguments
 * @argv: the array of input
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int result;
	int num1;
	int num2;

	if (argc >= 1)
	{
		if (argc != 3)
		{
			printf("Error");
			return (1);
		}
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d", result);
	}
	return (0);
}
