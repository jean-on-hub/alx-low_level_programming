#include "main.h"

/**
 * print_line - function
 * Description: print line based on input
 * @n: number of dashes to print
 */

void print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
