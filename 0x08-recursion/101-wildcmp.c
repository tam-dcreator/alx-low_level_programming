#include "main.h"
/**
*check_string - Function that checks the compare the value of two strings
* at a given index
*@str1: First string
*@str2: Second string
*@i: Index for str1
*@j: Index for str2
*
*Return: 1 if both strings are identical or zero if not
*/
int check_string(char *str1, char *str2, int i, int j)
{
	if (str1[i] == '\0' && str2[j] == '\0')
		return (1);
	if (str1[i] == str2[j])
		return (check_string(str1, str2, i + 1, j + 1));
	if (str1[i] == '\0' && str2[j] == '*')
		return (check_string(str1, str2, i, j + 1));
	if (str2[j] == '*')
		return (check_string(str1, str2, i + 1, j)) ||
			(check_string(str1, str2, i, j + 1));
	return (0);
}

/**
*wildcmp - Function that calls a subfunction check string to check if strings
* are identical
*@s1: First String
*@s2: Second string
*
*Return: 1 if strings are identical
*/
int wildcmp(char *s1, char *s2)
{
	return (check_string(s1, s2, 0, 0));
}
