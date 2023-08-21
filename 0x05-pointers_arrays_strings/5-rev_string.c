#include "main.h"

/**
 * rev_string - reverses a string
 * @s:the string to be reversed
 *
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	char strrev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	{
		counter++;
		for (i = 0; i < counter; i++)
		{
			counter--;
			strrev = s[i];
			s[i] = s[counter];
			s[counter] = strrev;
		}
	}
}
