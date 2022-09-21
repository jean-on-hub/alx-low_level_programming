#include "main.h"

/**
 * _strncat - function
 *
 * Description: concatenates two strings
 *
 * @dest: pointer to first string
 * @src: pointer to second string
 * @n: number of bytes to use
 *
 * Return: pointer to resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, i;

	for (a = 0; dest[a] != '\0'; a++)
		;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[a + i] = src[i];

	dest[a + i] = '\0';

	return (dest);
}
