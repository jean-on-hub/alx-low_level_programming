#include "main.h"

/**
 * *_memset - function
 *
 * Description: fills memory with a constant byte
 *
 * @s: pointer to area
 * @b: pointet to constant
 * @n: bytes to fill
 *
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
