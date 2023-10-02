#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @s: String of character to counted
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int k;

	k = 0;

	while (s[k] != '\0')
	{
		k++;
	}

	return (k);
}
