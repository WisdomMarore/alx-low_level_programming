#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s:the string to be reversed
 *
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i;
	
	for (i = 0; i < len / 2; i++)
	{
		char c = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = c;
	}
}
