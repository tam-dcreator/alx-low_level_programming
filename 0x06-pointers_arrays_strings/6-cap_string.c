#include "main.h"

/**
 * cap_string - Function to capitalizes all words in a string
 * @s: String to modify
 *
 * Return: Address of s
 */
char *cap_string(char *s)
{
	char *temp = s;
	int i, j;
	char a[] = " \t\n,;.!?\"(){}";

	for (i = 0; *s != '\0'; i++)
	{
		if (i == 0 && *s > 96)
			*s -= 32;

		else if (*s > 96)
		{
			for (j = 0; a[j] != '\0'; j++)
			{
				if (*(s - 1) == a[j])
					*s -= 32;
			}
		}
		s++;
	}
	return (temp);
}
