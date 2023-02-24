#include "main.h"

/**
 * print_most_numbers - Entry point
 * Description: Prints number from 0 - 9, without 2 & 4 the a new line
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
