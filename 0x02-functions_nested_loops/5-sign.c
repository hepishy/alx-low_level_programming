#include "main.h"

/**
 * print_sign - check if c is lowercase.
 * @n : the input to check
 * Return: Retrun 1 if + , -1 if - ,0 if equal 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
