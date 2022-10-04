#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints number of arguments
 *
 * @argc: int
 * @argv: array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
