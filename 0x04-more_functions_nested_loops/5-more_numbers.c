#include "main.h"

/**
 * more_numbers - print most_ numbers
 */

void more_number(void)
{
	int i, j;

	fot (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('l');
			_putchar (j % 10 + '0');
		}
		_putchar('\n');
	}
}
