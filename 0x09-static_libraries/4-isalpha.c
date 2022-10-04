#include "main.h"

/**
 * _isalpha - function
 *
 * Description: check is a character is
 * an alphabet
 * @c: character to check
 *
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
