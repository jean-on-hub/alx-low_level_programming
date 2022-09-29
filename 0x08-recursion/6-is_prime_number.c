#include "main.h"

/**
 * is_prime - function
 *
 * Description: check if numbers less than n
 * are divisors of n
 *
 * @n: integer
 * @d: integer
 *
 * Return: int
 */

int is_prime(int n, int d)
{
	if (d >= n && n > 1)
	{
		return (1);
	}
	else if (n % d == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, d + 1));
	}
}

/**
 * is_prime_number - function
 *
 * Description: check if a number is prime
 *
 * @n: number to check
 *
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
