#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * is_prime_number - returns prime number
 * Return: 1 if prime and 0 if not
 * @n: the input number
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_number(n, (n - 1)));
}
/**
 * prime_number - finds the actual prime number
 * Return: 1 if prime and 0 if not prime
 * @i: the checker
 * @n: the input number
 */
int prime_number(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (prime_number(n, i - 1));
}
