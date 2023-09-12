#include "main.h"
/**
 * main - main function is to print letters
 * Return: is 0
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
}
