#include <stdio.h>

/**
 * main - main block
 * Description: Prints alphabets in lowercase
 * and uppercase
 * Return: 0
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	x = 'A';

	while (x <= 'Z')
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
