#include "main.h"

/**
 * _strlen - function
 *
 * Description: returns the length of string
 *
 * @s: pointer to string
 *
 * Return: length of argument
 *
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n])
		n++;

	return (n);
}
