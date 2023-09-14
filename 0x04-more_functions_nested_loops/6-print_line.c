#include "main.h"
/**
 * print_line - sketch a line (n) characters long.
 * @n: total num of underscores to be printed.
 */
void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			_putchar('_');
	_putchar('\n');
}
