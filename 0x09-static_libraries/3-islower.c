#include "main.h"

/**
 *_islower - Funtion that checks for lowercase character
 *@c: The character to evaluate
 *
 *Return: On success 1
 *On error, 0 is returned
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
