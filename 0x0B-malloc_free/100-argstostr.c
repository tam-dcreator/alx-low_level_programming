#include "main.h"
#include <stdlib.h>

/**
 *argstostr - Function that concatenates all the arguments of your program
 *@ac:Equivalent to argc (counter for argumets)
 *@av: Equivalent to argv[] (arr where args are stored)
 *
 *Return: A pointer to a string or NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	char *s, *temp;

	if (*av == NULL || ac == 0)
		return (NULL);
	/*Create a malloc with size of the entire argument arr*/
	s = malloc(sizeof(char *) * sizeof(av - 1));
	if (s == NULL)
		return (NULL);
	/*Hold the malloc in a temp pointer*/
	temp = s;
	/*Add the argument char to the allocated memory, starting from 1 */
	for (i = 1; i < ac; i++)
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