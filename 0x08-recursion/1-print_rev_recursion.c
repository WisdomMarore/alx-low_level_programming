#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string
 *
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
