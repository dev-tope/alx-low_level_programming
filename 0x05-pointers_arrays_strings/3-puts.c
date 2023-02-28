#include "main.h"
#include <stdio.h>

/**
 * _puts - Entry point
 * @str: string 
 * Description: function that prints a string, followed by a new line
 * Return: void
 *
 */

void _puts(char *str)
{
	while(*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
