#include "main.h"

/**
 *_strspn - Function that gets the length of a prefix substring (string
 *seperated by space)
 *@s: String to access
 *@accept: Substring
 *
 *Return: Lenght of substring in prefix
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	for (i = 0; (s[i] != ' ' && s[i] != '\0'); i++)
	/* Iterate if value of s is neither space nor null */
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
	}
	return (count);
}
