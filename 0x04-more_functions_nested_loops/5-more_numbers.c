#include "main.h"

/**
 * more_numbers - prints 10 X the numb from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	int x, k;

	for (x = 0; x < 10; x++)
	{
		for (k = 0; k < 15; k++)
		{
			if (k >= 10)
				_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
		}
		_putchar('\n');
	}
}
