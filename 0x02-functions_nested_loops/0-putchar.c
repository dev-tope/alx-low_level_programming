#include "main.h"

/**
 * main - Entry point
 * Description - A program that prints _putchar
 *
 * Return 0 Success
 */
int main(void)
{
	char c[] = "_putchar\n";
	int i = 0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}


	return (0);
}
