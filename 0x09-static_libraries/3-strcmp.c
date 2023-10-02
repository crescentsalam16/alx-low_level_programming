#include "main.h"

/**
 * _strcmp - comparing two strings
 * @s1: string A to compare with
 * @s2: string B to compare
 *
 * Return: less than 0 if A < B, 0 if they're equal,
 * more than 0 if A > B
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
