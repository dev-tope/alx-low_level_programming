#include "main.h"

/**
 * _isalpha - Entry point
 * @c - alphabetic character
 * Return: 1 if c is an alphabet, 0 if false
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
        	return (1);
	}
	else
        {
                return (0);
        }
}
