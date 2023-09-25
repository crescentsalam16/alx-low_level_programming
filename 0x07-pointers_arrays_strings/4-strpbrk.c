#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - look for a set of byte in a string.
 * @s: string to be look for
 * @accept: stringthat containined the bytes to be look for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int j, k;

	for (j = 0; *s != '\0'; j++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (*s == accept[k])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
