#include "main.h"

/**
 * *cap_string - function
 *
 * Description: capitalize all words of a string
 *
 * @str: pointer to string
 *
 * Return: string
 */

char *cap_string(char *str)
{
	char s[] = ",\t;\n; .!?\"(){}";
	int d, i, n;

	for (i = 0; str[i] != '\0'; i++)
	{
		d = 0;

		if (i == 0)
		{
			d = 1;
		}
		else
		{
			for (n = 0; s[n] != '\0'; n++)
			{
				if (str[i - 1] == s[n])
				{
					d = 1;
					break;
				}
			}
		}

		if (d == 1)
		{
			if (str[i] <= 'z' && str[i] >= 'a')
			{
				str[i] -= ('a' - 'A');
			}
		}
	}
	return (str);
}
