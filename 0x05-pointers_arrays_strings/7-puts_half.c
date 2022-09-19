#include "main.h"

/**
 * puts_half - function
 *
 * Description: prints half of a string
 *
 * @str: pointer to string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int n = 0;

	for (n = 0; str[n] != '\0'; n++)
		;

	n++;
	for (n /= 2; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
