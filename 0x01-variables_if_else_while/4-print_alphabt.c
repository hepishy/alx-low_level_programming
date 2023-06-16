#include <stdio.h>

/**
 * main - Entry point
 * Description: print alphabets except q and e
 * Return: Always Return 0
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
