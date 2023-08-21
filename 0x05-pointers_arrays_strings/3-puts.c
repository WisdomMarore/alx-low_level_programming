#include "main.h"

/**
 * _puts - prints a string as output
 * @str:the string to be printed
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
