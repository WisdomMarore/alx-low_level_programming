#include "main.h"

/**
 * _strncat - joins two strings together
 *@dest: first string
 *@src: second string
 *@n: number of bytes
 *
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (n-- > 0 && *src != '\0')
	{
		*p++ = *src;
	}
	*p = '\0';
	return (dest);
}
