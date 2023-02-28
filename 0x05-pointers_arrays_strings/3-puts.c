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
	int i = 0;

	while(str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
