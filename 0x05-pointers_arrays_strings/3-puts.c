#include "main.h"

/**
 * _puts - prints  string to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
