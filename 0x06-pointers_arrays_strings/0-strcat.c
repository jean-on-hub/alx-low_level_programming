#include "main.h"

/**
 * *_strcat - function
 *
 * Description: concatentates two strings
 *
 * @src: first string
 * @dest: second string
 *
 * Return: a pointer to resulting string
 */

char *_strcat(char *dest, char *src)
{
	int a = -1, n;

	for (n = 0; dest[n] != '\0'; n++)
		;

	do {
		a++;
		dest[n] = src[a];
		n++;
	} while (src[a] != '\0');

	return (dest);
}
