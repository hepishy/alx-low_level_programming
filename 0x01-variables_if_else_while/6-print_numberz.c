#include <stdio.h>

/**
 * main - Entry point
 * Description: print numbers base 10
 * Return: Always Return 0
*/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}
	putchar('\n');
	return (0);
}
