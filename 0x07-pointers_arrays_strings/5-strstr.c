#include "main.h"

/**
 * *_strstr - function
 *
 * Description: locates a substring
 *
 * @haystack: pointer to string
 * @needle: pointer to substring
 *
 * Return: pointer to beginning of located substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
