#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 *
 * Description: Print alphabets in lowercase
 *
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

	putchar('\n');
	return (0);
}
