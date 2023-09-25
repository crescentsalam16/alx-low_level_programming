#include "main.h"

/**
 * *_memset - fillimg of memory with a constant byte
 * @s: memory portion to be filled
 * @b: character to copied
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
