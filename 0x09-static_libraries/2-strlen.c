#include "main.h"
#include <stdio.h>

/**
 * _strlen - Entry point
 * @s: the string
 * Description: Returns the length of a string
 * Return: int
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++);

	return (i);
}
