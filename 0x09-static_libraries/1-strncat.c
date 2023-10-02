#include "main.h"

/**
 * _strncat - concatenates bytes from one string to another
 * @dest: string A as dest
 * @src: string B as src
 * @n: number of bytes of str to concatenate
 *
 * Return: return resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int k, x;

	k = 0;
	x = 0;

	while (dest[k] != '\0')
		k++;

	while (src[x] != '\0' && x < n)
	{
		dest[k] = src[x];
		k++;
		x++;
	}

	dest[k] = '\0';

	return (dest);
}
