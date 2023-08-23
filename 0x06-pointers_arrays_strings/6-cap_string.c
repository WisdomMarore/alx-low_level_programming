#include "main.h"
#include <stdbool.h>

/**
 * is_separator - separates characters
 * @c: the character to be separated
 * cap_string - capitalises a string
 * @s: the string to be separated
 *
 * Return: Alawys 0 (Success)
 */

bool is_separator(char c)
{
	int i;

	char separators[] = " \t\n,;.!?\"(){}";
	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return true;
		}
		return false;
	}
	return (0);
}

char *cap_string(char *s)
{
	int i;

	bool new_word = true;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_separator(s[i]))
		{
			new_word = true;
		}
		else if (new_word)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 'a' + 'A';
			}
			new_word = false;
		}
	}
	return (s);
}
	
