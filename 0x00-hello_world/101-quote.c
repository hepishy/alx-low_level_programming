#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: print Qoutes using write function
 * Return:  return 1
*/
int main(void)
{
	char qut[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, qut, 59);
	return (1);
}
