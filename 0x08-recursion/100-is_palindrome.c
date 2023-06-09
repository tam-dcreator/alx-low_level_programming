#include "main.h"
/**
 *str_length - Function to calculate the length of a string
 *@s: String
 *
 *Return: Integer (Length of string)
 *
 */
int str_length(char *s)
{
	if (*s == '\0')
		return (-1);
	return (1 + str_length(s + 1));
}

/**
 *is_palindrome_recursive - Function that recursively checks if a string
 * is palindrome or not.
 *@s: String to be checked.
 *@start: Starting index, usually 0
 *@end: Index of last string, usually evaluated with str_length.
 *
 *Return: 1 for palindrome, 0 if its not
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 *is_palindrome - Function that calls the recursive palindrome and provide its
 *parameters
 *@s: String to be checked
 *
 *Return: 1 or 0, just like is_palindrome_recursive
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (is_palindrome_recursive(s, 0, str_length(s)));
}
