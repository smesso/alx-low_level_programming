#include "main.h"

/**
 * _isupper - checks for lowercase character.
 * @c: caracter recibo por main.
 * Return: 1 if c is uppercase and 0 if it isnt
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	} else
	{
		return (0);
	}
}
