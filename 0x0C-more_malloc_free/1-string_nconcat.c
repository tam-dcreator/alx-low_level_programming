#include "main.h"
/**
*string_nconcat-Function that concatenates two strings
*@s1: String one
*@s2: String two
*@n: Number of chars in s2 that would be added to s1
*
*Return: Pointer to the newly allocated space in memory or NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, len1 = 1, len2 = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*Get the length of both strings*/
	while (s1[i++] != '\0')
		len1++;
	i = 0;

	while (s2[i++] != '\0')
		len2++;

	/*Sum up total len*/

	len = len1 + len2;
	str = malloc(sizeof(*str) * len);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len1 - 1)
	{
		str[i] = s1[i];
		i++;
	}
	if (n >= len2)
		n = len2;
	while (j < n)
		str[i++] = s2[j++];

	str[i] = '\0';

	return (str);
}
