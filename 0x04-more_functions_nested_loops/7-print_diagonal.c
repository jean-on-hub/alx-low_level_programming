#include "main.h"

/**
 * print_diagonal - function
 * Description: draws a diagonal on the terminal
 * @n: number of \ to be printed
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}

			_putchar('\\');

			if (a == (n - 1))
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
