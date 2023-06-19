#include "main.h"
/**
*argstostr - Function that concatenates all the arguments of your program
*@ac: Argument Count
*@av: Argument vector
*
*Return: Pointer to a new string or NULL
*/
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len = ac + 1, m = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	/*Find the combined length of the individual strings in argv*/
	for (j = 0; j < ac; j++)
		len += strlen(av[j]);

	str = malloc(sizeof(*str) * len);

	if (str == NULL)
		return (NULL);
	for (j = 1; j < ac; j++)
	{
		i = 0;
		while (av[j][i] != '\0')
			str[m++] = av[j][i++];
		str[m++] = '\n';
	}
	str[m] = '\0';
	return (str);
}
