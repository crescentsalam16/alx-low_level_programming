#include "main.h"

/**
 * _print_rev_recursion - printing of a string in a reverse order
 * @s: string to print
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
