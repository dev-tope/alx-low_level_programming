#include <stdio.h>

/**
 * main - Entry point
 * @void: Null value
 *
 * Description: Print all alphabets in lowercase
 * Return: Zero value to be successful
 */
int main(void)
{
	char a;
	for(a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar("\n");
	return (0);
}
