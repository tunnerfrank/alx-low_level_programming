#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _puts_recursion - prints a string and a new line
 * Return: string input
 * @s: string input
 */
void _puts_recursion(char *s)
{
	if (*s == NULL)
	{
		return (0);
	}
	else 
	{
		_putchar(*s);
		_putchar('\n');
	}
	return (s);
}
