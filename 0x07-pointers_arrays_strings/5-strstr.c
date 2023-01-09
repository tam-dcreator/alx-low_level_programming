#include "main.h"

/**
 *_strstr - Function to locate a substring
 *@haystack: String to search in
 *@needle: Substring thats searched for
 *
 *Return: Pointer to beginning of located substring if found or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (; *haystack != '\0'; haystack++)
	/* Iterate if value of haystack is not null */
	{
		if (*haystack == *needle)
		/* current haystack char matches first substr char */
		{
			for (i = 1; needle[i] != '\0'; i++)
			{
			/* Check if subsequent chars match with substr */
				if (*(haystack + i) == needle[i])
				{
					if (needle[i + 1] == '\0')
						return (haystack);
				}
				else
				{
					break;
				}
			}
		}
	}
	return ('\0');
}
