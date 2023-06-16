#include <stdio.h>

/**
 * main - Entry point
 * Description: print numbers base 16
 * Return: Always Return 0
*/
int main(void)
{
	char ch = '0';
	char CH = 'a';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'f')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
