#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: Print single digit numbers
 * separated by ,
 * Return: 0
 */

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(48 + x);
		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}
