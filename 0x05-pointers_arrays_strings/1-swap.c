#include "main.h"
#include <stdio.h>

/**
 * swap_int - Entry point
 * @a: First Integer
 * @b: Second Integer
 * Description: Swaps values of two integers
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
