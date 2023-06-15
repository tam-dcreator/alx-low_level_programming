#include "main.h"
/**
*str_concat- Function taht concatenates two strings
*@s1: String 1
*@s2: String 2
*
*Return: Pointer to allocated space containing s1 and s2 or NULL
*/
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i = 0, j = 0, len = 1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*Get the combined length of s1 and s2 */
	while (s1[i++] != '\0')
		len++;

	i = 0;

	while (s2[i++] != '\0')
		len++;

	str = malloc(sizeof(*str) * len);

	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
