#include "main.h"

/**
 * print_rev - function
 *
 * Description: prints string in reverse
 *
 * @s: pointer to string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int n = 0;

	while (s[n])
		n++;

	while (n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
