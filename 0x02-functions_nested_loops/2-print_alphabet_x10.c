#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return: should be 0
 */
void print_alphabet(void)
{
	int x;
	char i;

	for (x = 1; x <= 10; x++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
	}
	_putchar('\n');
}
