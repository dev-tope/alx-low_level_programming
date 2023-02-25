#include <stdio.h>

/**
 * main - Entry point
 * @void: Null value
 *
 * Description: print alphabets upper and lower
 * Return: Zero value to be succesful
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
