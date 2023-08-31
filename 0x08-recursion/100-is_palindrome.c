#include <stdio.h>
#include <string.h>
#include "main.h"
#include <ctype.h>
/**
 * is_actual_palidrome - checks if string is a palindrome
 * @l: length checker
 * @b: length checker
 * Return: 1 if palidrome and 0 if not
 * @s: the input string
 */
int is_actual_palidrome(char *s, int l, int b)
{
	if (b > l)
	{
		if (tolower(s[l] != tolower(s[b])))
		{
			return (0);
		}
		else
		{
			return (is_actual_palidrome(s, l + 1, b - 1));
		}
	}
	return (1);
}
/**
 * is_palindrome - checks if its a palindrome
 * Return: 1 if it is 0 if not
 * @s: input string
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (s == NULL)
	{
		return (1);
	}
	return (is_actual_palidrome(s, 0, length - 1));
}
