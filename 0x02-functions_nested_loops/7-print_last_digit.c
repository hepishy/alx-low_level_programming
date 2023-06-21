#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - return the last digit of n
 * @n : the input to check
 * Return: Retrun 1 if + , -1 if - ,0 if equal 0.
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;
	if (a < 0)
		a = -a;
	_putchar('0' + a);
	return (a);
}
