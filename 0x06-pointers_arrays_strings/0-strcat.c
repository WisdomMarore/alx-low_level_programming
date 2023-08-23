#include "main.h"

/**
 * _strcat - joins two strings together
 * @dest:first string
 * @src:second string
 *
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
