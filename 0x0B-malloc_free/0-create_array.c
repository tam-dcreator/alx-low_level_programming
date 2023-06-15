#include "main.h"
/**
*create_array - Function that creates an array of chars, and initializes it
*with a specific char
*
*@size: Size of the array
*@c: Char to be initilized
*
*Return: Pointer to the array or NULL if it fails.
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str;

	str = malloc(sizeof(str) * size);
	if (str == NULL)
		return (NULL);
	while (i++ < size)
	{
		str[i] = c;
	}
	str[i] = '\0';
	return (str);
}
