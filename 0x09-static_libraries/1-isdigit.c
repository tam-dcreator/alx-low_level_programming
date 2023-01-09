#include "main.h"

/**
 *_isdigit - Function to check input if its a digit
 *@c: integer which value would be checked
 *
 *Return: 1 if digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
