#include "main.h"

/**
 * *_memcpy - coping of  memory area
 * @dest: destination memory area to be copied
 * @src:source  memory area to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}

	return (dest);
}
