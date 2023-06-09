#include "main.h"

/**
 *_strcpy - Function that copies a string from a source to a destination
 *@dest: The destination
 *@src: The source
 *
 *Return: The pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	char *temp;

	temp = dest;
	while (*src != '\0')
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';

	return (dest);
}
