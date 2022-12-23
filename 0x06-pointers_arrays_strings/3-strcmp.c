#include "main.h"

/**
 * _strcmp - Function to compare 2 string
 * @s1:First string
 * @s2:Second string
 *
 * Return:Int
 */
int _strcmp(char *s1, char *s2)
{
	while (((*s1 != '\0') && (*s2 != '\0')) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}
