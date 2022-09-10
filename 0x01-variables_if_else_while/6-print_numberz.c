#include <stdio.h>

/**
 * main - main block
 *
 * Description: Print every single digit of
 * base 10
 *
 * Return: 0
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(48 + n);
		n++;
	}

	putchar('\n');

	return (0);
}
