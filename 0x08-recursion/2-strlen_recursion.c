#include "main.h"

/**
 *_strlen_recursion - Funtion that returns the length of a string
 *@s: The string whose length is counted
 *
 *Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	int len = 1;

	if (*s != '\0')
		return (len + _strlen_recursion(s + 1));
}
