#include "main.h"
/**
 * print_sign - functionis to print sign of a num
 * @n: the parameter of the fuction
 * Return: return 1, 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
