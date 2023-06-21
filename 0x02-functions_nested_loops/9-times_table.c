#include "main.h"

/**
 * times_table - print 9 times table 9
 *
 * Return: void.
 */
void times_table(void)
{
	int i, j;
	int div, mod, prod;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			prod = i * j;
			div = prod / 10;
			mod = prod % 10;
			if (prod > 9)
				_putchar('0' + div);
			else if (j != 0)
				_putchar(' ');
			_putchar('0' + mod);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			}
		_putchar('\n');
	}
}
