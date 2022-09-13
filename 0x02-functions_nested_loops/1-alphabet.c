#include "main.h"
/**
 * main - main block
 *
 * Description: prints the alphabet, followed by a new line.
 *
 * Return: 0
 */

void print_alphabet(void)

{
	char c = 'a';
	while(c<='z')

	{
		putchar(c);
		c++;
	}
}

int main(void)

{
	print_alphabet();
	putchar('\n');
	return (0);
}

