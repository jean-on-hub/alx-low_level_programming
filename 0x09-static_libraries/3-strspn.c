#include "main.h"

/**
 * _strspn - function
 *
 * Description: gets the length of a prefix substring
 *
 * @s: pointer to string
 * @accept: character to match
 *
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, c = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (c);
}
