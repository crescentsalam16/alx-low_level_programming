#include "main.h"

/**
 * print_rev - prints in a reverse order of given text, followed by a new line
 * @s: text to be printed
 */
void print_rev(char *s)
{
	int x, k, len;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	len = x;

	for (k = len - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}

	_putchar('\n');
}
