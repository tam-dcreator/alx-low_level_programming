#include "main.h"
#include <stdlib.h>

/**
 *_strdup - Creates a copy of an input string in newly allocated memory
 *@str: String thats copied
 *
 *Return: Pointer to duplicate string or null
 */
char *_strdup(char *str)
{
	char *s;
	int len = 0, i = 0;

	/*First get the length of the input*/
	while (str[i++] != '\0')
		len++;

	/*Create a malloc thats the same size as the input string*/
	s = malloc(sizeof(char) * len);

	if (s == NULL)
		return (NULL);
	/*Initialize the allocated space with values*/
	i = 0;
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';

	return (s);
}
