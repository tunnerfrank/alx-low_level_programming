#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: the input number given
 * Return: the value of factorial if n != 0 else return 1
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	n = n * factorial(n - 1);
	return (n);
}
