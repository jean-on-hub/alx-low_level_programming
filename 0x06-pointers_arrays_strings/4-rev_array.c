#include "main.h"

/**
 * reverse array - function
 *
 * Description: reverses the content of an array
 *
 * @a: pointer to array
 * @n: pointer to number of elements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int d, i;

	for (i = n - 1; i > n / 2; i--)
	{
		d = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = d;
	}
}
