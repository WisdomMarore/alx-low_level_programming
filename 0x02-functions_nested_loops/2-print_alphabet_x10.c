#include "main.h"
#include <stdio.h>

/**
 * print_alphabetx10 - prints the alphabet in  lowercase 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
}
