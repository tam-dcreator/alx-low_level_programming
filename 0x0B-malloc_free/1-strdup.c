#include "main.h"
/**
*_strdup - Function that returns a pointer to a newly allocated space in
*memory, which contains a copy of the string given as a parameter
*
*@str:String to be copied
*
*Return:Pointer to the duplicate string or NULL
*/
char *_strdup(char *str)
{
	char *s;
	int i = 0, len;

	if (str == NULL)
		return (NULL);

	/* Use the sizeof operator to get the length of str */
	len = sizeof(str);

	s = malloc(sizeof(*s) * len);

	if (s == NULL)
		return (NULL);
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}

	s[i] = '\0';

	return (s);
}
