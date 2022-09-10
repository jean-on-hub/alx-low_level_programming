#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - main block
 *
 * Description: Prints all single digits
 * of base 10 starting at 0
 *
 * Return: 0
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%i", n);
		n++;
	}
	printf("\n");

	return (0);
}
