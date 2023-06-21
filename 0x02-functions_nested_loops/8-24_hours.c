#include "main.h"

/**
 * jack_bauer - return the last digit of n
 *
 * Return: Retrun 1 if + , -1 if - ,0 if equal 0.
 */
void jack_bauer(void)
{
	int i, j;
	int div;
	int mod;

	for (i = 0; i < 24; i++)
		for (j = 0; j < 60; j++)
		{
			div = i / 10;
			mod = i % 10;
			_putchar('0' + div);
			_putchar('0' + mod);
			_putchar(':');
			div = j / 10;
			mod = j % 10;
			_putchar('0' + div);
			_putchar('0' + mod);
			_putchar('\n');
		}
}
