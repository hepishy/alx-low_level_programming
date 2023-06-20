#include "main.h"

/**
 * main - Entry point
 * Description: print _putchar
 * Return: Always Return 0
*/
int main(void)
{

	char text[] = "_putchar\n";
	int i = 0;
	
	while (text[i] != '\0')
	{
		_putchar(text[i]);
		i++;
	}
	return (0);
}
