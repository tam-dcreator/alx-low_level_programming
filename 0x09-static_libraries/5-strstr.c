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
	char *h, *n;

	for (; *haystack != '\0'; haystack++)
	/* Iterate if value of haystack is not null */
	{
		h = haystack;
		n = needle;

		/* Run a for loop to check if *haystack and subsequent*/
		/* chars match with substr */
		for (; *n != '\0' && *h == *n; h++, n++)
			;

		if (!*n)
		/*if *n = '\0', !*n = 1, which evaluates as true */
			return (haystack);
	}
	return ('\0');
}
