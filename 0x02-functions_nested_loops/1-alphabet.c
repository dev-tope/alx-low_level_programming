#include "main.h"

/**
 * main - Entry point
 * Description _ Print alphabets lowercase
 * Return: void
 */

void print_alphabet(void)
{
	char c = 'a';

	while(char c <= 'z')
	{
		_putchar(c);
		c++;
	}
	
	putchar('\n');
}
