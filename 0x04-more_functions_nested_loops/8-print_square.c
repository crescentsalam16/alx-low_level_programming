#include "main.h"
/**
 * print_square - drawing a square by using multiple lines and #'s.
 * @k: the number of # 2b  printed in every line.
 */
void print_square(int k)
{
	int i, j;

	if (k > 0)
	{
		for (i = 0; i < k; i++)
		{
			for (j = 0; j < k; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
