#include <stdio.h>

/**
 * main - Entry point
 * @void: Null value
 *
 * Description: prints all numbers from 0 to 9
 * Return: Zero value to be succesful
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}

