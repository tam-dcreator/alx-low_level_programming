#include "main.h"

/**
 *binary_to_uint - Function that converts binary number to an int.
 *@b: Pointer to a string of 0 and 1 chars
 *
 *Return: Converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	/*If *b isn't the null byte, while loop would run*/
	while (*b)
	{
		/*Check if current value of b is not 1 or 0 and return 0*/
		if (!(*b == '0' || *b == '1'))
			return (0);
		/*Multiply num by 2 using bitwise shift right*/
		num <<= 1;
		if (*b == '1')
			num += 1;
		b++;
	}
	return (num);
}
