#include "main.h"

/**
 * *_strcpy - function
 *
 * Description: copies string pointed by src
 *
 * @dest: return string
 * @src: pointer to string to copy
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int n = -1;

	do {
		n++;
		dest[n] = src[n];
	} while (src[n] != '\0');

	return (dest);
}
