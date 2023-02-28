#include "main.h"
#include <stdio.h>

/**
 * print_rev - Entry point
 * @s: string
 * Description: prints a string in reverse followed by a new line
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n')
}
