#include "main.h"

/**
 * print_last_digit - function
 *
 * Description: prints last digit of a number
 *
 * @n: number to check
 *
 * Return: 0
 */

int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0)
		d *= -1;

	_putchar(d + '0');

	return (d);
}
