#include "main.h"
#include <stdlib.h>

/**
 *str_concat - Function that concatenates two strings
 *@s1: First string
 *@s2: Second string
 *
 *Return: Pointer to concatenated string or Null.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int len, len1 = 1, i = 0, j = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*Get the length of the input strings*/
	while (s1[i++] != '\0')
		len1++;
	while (s2[j++] != '\0')
		len2++;

	/*Create a malloc thats the same size as the input string*/
	len = len1 + len2;
	s = malloc(sizeof(char) * len);

	if (s == NULL)
		return (NULL);
	/*Initialize the allocated space with values from s1 and s2*/
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
