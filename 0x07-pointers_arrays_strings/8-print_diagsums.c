#include "main.h"
#include <stdio.h>

/** print_diagsums - function
 *
 * Description: prints the sum of the diagonals
 * of a square matrix
 * @a: array
 * @size: size of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum_x = 0, sum_y = 0;

	for (i = 0; i < size; i++)
	{
		sum_x += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sum_y += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum_x, sum_y);
}
