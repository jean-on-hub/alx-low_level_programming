#include <stdio.h>

/**
 * main - main block
 * Description: Print alphabets except q and e
 * Return: 0
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
		x++;
	}

	putchar('\n');

	return (0);
}
