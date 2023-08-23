#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @s: the string
 *
 * Return: Always 0 (Success)
 */
char *leet(char *s)
{
	int i;
	char *leet = "aAeEoOtTlL";
	char *leet_replace = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		int j;

		for (j = 0; leet[j] != '\0'; j++)
		{
			if (s[i] == leet[j])
			{
				s[i] = leet_replace[i];
				break;
			}
		}
	}
	return (s);
}

