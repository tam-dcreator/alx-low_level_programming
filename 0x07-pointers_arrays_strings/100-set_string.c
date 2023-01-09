#include "main.h"

/**
 *set_string - Function to set the value of a pointer to char
 *@s: Double pointer to var that should be set
 *@to: Variable to set it to
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
