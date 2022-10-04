#include <stdio.h>
#include <stdlib.h>

/**
 * isInt - function
 *
 * Description: check if argument is integer
 *
 * @n: argument to check
 *
 * Return: 0 or 1
 */

int isInt(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] < '0' || n[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

/**
 * main - entry point
 *
 * Description: prints the addition of positive numbers
 *
 * @argc: int
 * @argv: array
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int add = 0;
	
	while (--argc)
	{
		if (isInt(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		add += atoi(argv[argc]);
	}
	printf("%d\n", add);
	return (0);
}
