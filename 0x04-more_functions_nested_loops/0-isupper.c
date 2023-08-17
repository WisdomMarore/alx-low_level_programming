#include "main.h"

/**
 * _isupper - checks if given character is uppercase
 * @c:the character to be checked
 *
 *Return: I if c is upper 0 otherwise
 */
 int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
		_putchar('\n');
	}
	else
	{
		return (0);
		_putchar('\n');
	}
}
