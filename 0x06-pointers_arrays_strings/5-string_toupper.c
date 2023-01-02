#include "main.h"

/**
 *string_toupper - Function that changes lowercase to uppercase
 *@s:String of characters
 *
 *Return:Modified string
 */
char *string_toupper(char *s)
{
	char *temp = s;

	while (*temp != '\0')
	{
		if (*temp > 96 && *temp <= 122)
			*temp -= 32;
		temp++;
	}
	return (s);
}
