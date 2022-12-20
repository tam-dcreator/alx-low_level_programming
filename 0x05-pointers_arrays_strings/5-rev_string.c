#include "main.h"

/**
 *rev_string - Function to reverse a string
 *@s: String that would be reversed
 *
 */
void rev_string(char *s)
{
	int str_len = 0, a = 0, i;
	char *end, *start, temp;

	while (*(s + a) != '\0')
	{
		str_len++;
		a++;
	}

	*end = s;
	*start = s;

	for (i = 0; i < str_len - 1; i++)
		end++;

	for (i = 0; i < str_len / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
	}
}
