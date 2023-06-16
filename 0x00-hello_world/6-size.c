#include <stdio.h>

/**
* main - Entry point
* Description: print size of various types
* Return: return 0 always
*/
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of an long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of an long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of an float: %lu byte(s)\n", sizeof(float));
	return (0);
}
