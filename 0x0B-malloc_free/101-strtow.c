#include "main.h"
#include <string.h>
/**
*strtow - Function that splits a string into words.
*@str: The string to be spilted
*
*Return: Pointer to an array of strings or NULL
*/
char **strtow(char *str)
{
	char **ptr;
	char *token;
	char *copy = strdup(str);
	int len = 0, i = 0, j = 0;
	const char *delimiters = " ";

	if (str == NULL || str[0] == '\0')
		return (NULL);

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			len++;
		i++;
	}

	if (len == 0)
		return (NULL);

	ptr = malloc(sizeof(char *) * (len + 1));
	if (ptr == NULL)
		return (NULL);

	token = strtok(copy, delimiters);

	while (token)
	{
		ptr[j] = malloc(sizeof(char) * (strlen(token)));
		if (ptr[j] == NULL)
			return (NULL);
		strcpy(ptr[j], token);
		j++;
		token = strtok(NULL, delimiters);
	}

	return (ptr);
}
