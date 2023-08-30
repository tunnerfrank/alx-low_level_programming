#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _pow_recursion - gives the power of a number to an exponent
 * Return: -1 if y (expontent) is lower than 0 else return number
 * @x: base
 * @y: exponent
 */
int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	result = x *  _pow_recursion(x, (y - 1));
	return (result);
}
