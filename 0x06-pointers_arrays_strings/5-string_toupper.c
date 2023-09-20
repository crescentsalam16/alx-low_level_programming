#include "main.h"

/**
 * string_toupper - convert every lowercase letters of a string to uppercase
 * @s: text to be modify
 * Return: the converted  string
 */
char *string_toupper(char *s)
{
	int k;

	for (k = 0; s[k] != '\0'; k++)
	{
		if (s[k] >= 'a' && s[k] <= 'z')
			s[k] = s[k] - 32;
	}

	return (s);
}
