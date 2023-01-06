#include "main.h"

/**
 *str_length - Function to calculate the length of a string
 *@s: String with unknown length
 *
 *Return: Integer length of the string
 */
int str_length(char *s)
{
	if (*s == '\0')
		return (-1);
	return (1 + str_length(s + 1));
}

/**
 *is_pal - Function that checks if a string is palindrome
 *@len: Length of the string
 *@i: Iteration counter, starts of at zero
 *@s: String that is accessed
 *
 *Return: 1 (palindrome) or 0(not palindrome)
 */
int is_pal(int len, int i, char *s)
{
	if (i == len / 2 + 1)
		return (1);
	if (s[i] != s[len - i])
		return (0);
	return (is_pal(len, i + 1, s));
}

/**
 *is_palindrome - Function that calls the subfunctions with their parameters
 *@s:String to be accessed
 *
 *Return: Same as is_pal()
 */
int is_palindrome(char *s)
{
	int len = str_length(s);

	return (is_pal(len, 0, s));
}
