#include "main.h"
#include <string.h>

/**
 *puts_half - prints half of a string 
 *@str:string to be printed
 *
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int start = (len + 1) / 2;
	int i;

	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
