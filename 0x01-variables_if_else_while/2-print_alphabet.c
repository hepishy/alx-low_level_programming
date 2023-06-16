#include <stdio.h>

/**
 * main - Entry point
 * Description: print alphabets
 * Return: Always Return 0
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
