#include "main.h"

/**
 * *string_toupper - function
 *
 * Description: changes all lowercase letters to uppercase
 *
 * @str: pointer to string
 *
 * Return: string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] -= 32;
	}
	return (str);
}
