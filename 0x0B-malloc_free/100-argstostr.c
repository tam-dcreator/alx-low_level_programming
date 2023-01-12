#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *argstostr - Function that concatenates all the arguments of your program
 *@ac:Equivalent to argc (counter for argumets)
 *@av: Equivalent to argv[] (arr where args are stored)
 *
 *Return: A pointer to a string or NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len = 2;
	char *s, *temp;

	if (av == NULL && ac == 0)
		return (NULL);
	/*Create a malloc with size of the entire argument arr*/
	/* First find the length of the all values in av*/
	for (k = 0; k < ac; k++)
		len += strlen(av[k]);

	s = malloc(sizeof(*s) * len);
	if (s == NULL)
		return (NULL);
	/*Hold the malloc in a temp pointer*/
	temp = s;
	/*Add the argument char to the allocated memory, starting from 0 */
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			/*Fill the alloc memory with chars j fro av[i]*/
			*temp = av[i][j];
			temp++;
			j++;
		}
		*temp = '\n';
		temp++;
	}
	*temp = '\0';

	return (s);
}
