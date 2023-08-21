#include "main.h"

/**
 * _strcpy - copies string pointed to by src
 * @dest:buffer loacation
 * @src:string location
 *
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return dest;

}
