#include "main.h"

/*
 * The following function prints an  alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		putchar('\n');
	}
}
int main(void)
{
	print_alphabet();
	return (0);
}
