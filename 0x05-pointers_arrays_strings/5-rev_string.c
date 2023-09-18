#include "main.h"

/**
 * rev_string - reverses a given text
 * @s: Text to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int k, len, lenB;

	len = 0;
	lenB = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	lenB = len - 1;

	for (k = 0; k < len / 2; k++)
	{
		tmp = s[k];
		s[k] = s[lenB];
		s[lenB--] = tmp;
	}
}
