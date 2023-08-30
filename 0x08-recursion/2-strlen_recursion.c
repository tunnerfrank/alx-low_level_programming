#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strlen_recursion - determines string length
 * Return: string length
 * @s: string input
 */
int _strlen_recursion(char *s)
{
	int length = 1;

	if (*s == '\0')
	{
		return (0);
	}
	length = length + _strlen_recursion(s + 1);
	return (length);
}
