#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *string_nconcat - Function that concatenates two strings
 *@s1: First string
 *@s2: Second string
 *@n: Number of bytes from s2 to use
 *
 *Return: Pointer to new string or Null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, len = 1, len1 = 1, len2 = 0;
	char *s;

	/*Check if string is null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*Get the length of the input strings*/
	while (s1[i++] != '\0')
		len1++;
	while (s2[j++] != '\0')
		len2++;
	/*Check if n is greater than s2*/
	if (n < len2)
		len2 = n;

	len = (len1 + len2);
	/*Create memory allocation*/
	s = malloc(sizeof(*s) * len + 1);
	if (s == NULL)
		return (NULL);
	/*Initialise s with values */
	i = 0, j = 0;
	while (i < len)
	{
		if (i < len1 - 1)
			s[i] = s1[i];
		else
			s[i] = s2[j++];
		i++;
	}
	s[i] = '\0';

	return (s);
}
