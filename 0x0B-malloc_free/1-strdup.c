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
	int i = 0;

	if (str == NULL)
		return (NULL);

	/* Use the sizeof operator to get the length of str */

	s = malloc(sizeof(*s) * sizeof(*str));

	if (s == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}

	s[i] = '\0';

	return (s);
}
