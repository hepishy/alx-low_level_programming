#include <ctype.h>
#include "main.h"

/**
 * _islower - check if c is lowercase.
 * @c : is the char to check
 * Return: Always 0.
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
