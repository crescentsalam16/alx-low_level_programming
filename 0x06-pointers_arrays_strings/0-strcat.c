#include "main.h"

/**
 * _strcat - join two strings
 * @dest: string A to be appended to
 * @src: string B to add to A
 *
 * Return: return B joined to A
 */
char *_strcat(char *dest, char *src)
{
	int k, j;

	k = 0;
	j = 0;

	while (dest[k] != '\0')
		k++;

	while (src[j] != '\0')
	{
		dest[k] = src[j];
		j++;
		k++;
	}

	dest[k] = '\0';

	return (dest);
}
