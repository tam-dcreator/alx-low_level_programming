#include "main.h"

/**
 *_strpbrk - Function tht searches a string for a set of bytes
 *@s: String to search
 *@accept: Bytes to search for
 *
 *Return: Pointer to the byte in s that matches one byte or null if not found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	/* Iterate if value of s is not null */
	{
		for (i = 0; accept[i] != '\0'; i++)
		/*Check if the current s char is in the accept array*/
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
