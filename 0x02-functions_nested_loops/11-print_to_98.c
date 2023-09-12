#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print natural num from n to 98.
 * @n: the begining num to start from to 98
 * Return: void returns none.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
}
