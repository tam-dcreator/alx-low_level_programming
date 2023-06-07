#include "main.h"

/**
 *check_sqrt - Find square root of number
 *@n: Number to find the square root
 *@num: Starts at 1
 *
 *Return: Square root of n
 */
int check_sqrt(int n, int num)
{
	if (n <= 0)
		return ((num - 1) / 2);
	return (check_sqrt(n - num, num + 2));
}

/**
 *check_prime - Function that takes number and check if its prime
 *@n: Number whose prime is checked
 *@i: Square root of the number, calculated with the check_sqrt function
 *
 *Return: 0 (not prime) or 1(if prime)
 */
int check_prime(int n, int i)
{
	if (n < 2)
		return (0);
	if (i == 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i - 1));
}

/**
 *is_prime_number - Check if a number is prime by calling check_prime and
 *check_sqrt functions
 *@n: Number to check
 *
 *Return: 0(not prime) or 1(prime)
 */
int is_prime_number(int n)
{
	return (check_prime(n, check_sqrt(n, 1)));
}
