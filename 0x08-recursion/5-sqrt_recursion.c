#include <stdio.h>
#include <stdio.h>
#include "main.h"
/**
 * sqrt_recursive - finds the natural squareroot of a number
 * @n: input number
 * @i: the test number
 * Return: -1 if the number has no natural squareroot
 */
int sqrt_recursive(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (sqrt_recursive(n, i + 1));
}
/**
 * _sqrt_recursion - just returns the squareroot
 * @n: input number
 * Return: -1 if no squareroot and the squareroot if yes
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_recursive(n, 0));
}
