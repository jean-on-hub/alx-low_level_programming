#include "main.h"

/**
 * *leet - function
 *
 * Description: encodes a string into 1337
 *
 * @str: pointet to string
 *
 * Return: string
 */

char *leet(char *str)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == *(str + i))
				*(str + i) = b[j];
		}
	}
	return (str);
}
