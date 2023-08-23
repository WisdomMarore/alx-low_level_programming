#include "main.h"

/**
 * _strncat - joins two strings together
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 *
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	
	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	
	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
