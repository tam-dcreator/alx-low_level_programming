#include "main.h"

/**
 *_isalpha - Funtion that checks for alphabetic character
 *@c: The character to evaluate
 *
 *Return: On success 1
 *On error, 0 is returned
 */
int _isalpha(int c)
{
	if (c > 64 && c < 123)
		return (1);
	else
		return (0);
}
