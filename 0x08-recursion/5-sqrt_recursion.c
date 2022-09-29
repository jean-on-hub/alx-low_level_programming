#include "main.h"

/**
 * root - function
 *
 * Description: find sqaure root
 *
 * @n: number to find root
 * @d: sqaure root
 *
 * Return: int
 */

int root(int n, int d)
{
	if (d * d == n)
	{
		return (d);
	}
	else if (d * d < n)
	{
		return (root(n, d + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - function
 *
 * Description: find natural square root
 *
 * @n: number
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (root(n, 1));
}
