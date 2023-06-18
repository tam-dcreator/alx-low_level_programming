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
	char *str, *str_temp;
	int i, j, len = (1 + ac), m = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/*Find the combined length of the individual strings in argv*/
	for (j = 1; j < ac;)
	{
		str_temp = av[j++];
		i = 0;
		while (str_temp[i++] != '\0')
			len++;
		/*Incrementing len again for new line char included per word */
		len++;
	}
	str = malloc(sizeof(*str) * len);

	if (str == NULL)
		return (NULL);
	for (j = 1; j < ac;)
	{
		str_temp = av[j++];
		i = 0;
		while (str_temp[i] != '\0')
			str[m++] = str_temp[i++];
		str[m++] = '\n';
	}
	str[m] = '\0';
	return (str);
}
