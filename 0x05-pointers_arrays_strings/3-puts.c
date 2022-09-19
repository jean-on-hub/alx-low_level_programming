#include "main.h"

/**
 * _puts - function
 *
 * Description: prints string to stdout
 *
 * @str: pointer to string
 *
 * Return: void
 */

void _puts(char *str)
{
	int n = 0;

	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
