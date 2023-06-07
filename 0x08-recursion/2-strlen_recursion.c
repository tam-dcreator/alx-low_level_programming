#include "main.h"
/**
 *_strlen_recursion - A function that returns the length of a string using
 *recursion.
 *
 *@s: String to be counted
 *
 *Return: Length of string s
 */
int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s == '\0')
	{
		return (0);
	}
	return (i + _strlen_recursion(s + 1));
}
