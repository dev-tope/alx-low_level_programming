#include <stdio.h>

/**
 * main - Entry point
 * @void: Null value
 *
 * Description: print alphabets upper and lower
 * Return: Zero value to be successful
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
