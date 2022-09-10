#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: Print the lowercase alpabets
 * in reverse
 * Return: 0
 */

int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}

	putchar('\n');

	return (0);
}
