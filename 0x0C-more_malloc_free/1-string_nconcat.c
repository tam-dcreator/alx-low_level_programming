#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *string_nconcat - Function that concatenates two strings
 *@s1: First string
 *@s2: Second string
 *@n: Number of bytes from s2 to use
 *
 *Return: Pointer to new string or Null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len = 0;
	char *alloc, *temp;

	/*Check if string is null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*Check if n is greater than s2*/
	if (n >= strlen(s2))
		len = strlen(s2) + 1;
	else
		len = n;
	/*Create memory allocation*/
	alloc = malloc(sizeof(*alloc) * (len * strlen(s1)));
	if (alloc == NULL)
		return (NULL);
	temp = alloc;
	/*Initialise alloc with first string */
	for (i = 0; i < strlen(s1); i++)
	{
		*temp = s1[i];
		temp++;
	}
	/*Initialise alloc with second string*/
	for (j = 0; j < len; j++)
	{
		*temp = s2[j];
		temp++;
	}
	*temp = '\0';

	return (alloc);
}
