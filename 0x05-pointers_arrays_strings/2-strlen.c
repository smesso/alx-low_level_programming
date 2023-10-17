#include "main.h"

/**
 * _strlen - Calculate the length of a string
 * @s: Pointer to a string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
int length = 0;

if (s != NULL)
{
while (s[length] != '\0')
{
length++;
}
}

return (length);
}
