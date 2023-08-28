#include "main.h"
#include <string.h>

/**
 * _strstr - finds the first occurence of a substring
 * @haystack: the string
 * @needle: the substring
 *
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	char *p1 = haystack;
	char *p2 = needle;

	while (*p1 != '\0')
	{
		char *p1Start = p1;
		p2 = needle;

		while (*p1 && *p2 && *p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
			return (p1Start);
		p1 = p1Start + 1;
	}
	return (NULL);
}
