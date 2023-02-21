#include "main.h"

/**
* print_alphabet_x10 - Entry point
* Description - Prints the alphabet 10x
* Return: 0
*/

void print_alphabet_x10(void)
{
    int i;

    for (i = 0; i <= 10; i++)
    {
        char c = 'a';

        while (c <= 'z')
        {
            _putchar(c);
            c++;
        }

        _putchar('\n');
        i++;
    }
}
