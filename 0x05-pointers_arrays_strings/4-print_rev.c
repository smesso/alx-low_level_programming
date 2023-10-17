#include "main.h"

/**
 * print_rev - Print a string in reverse followed by a new line
 * @s: Pointer to a string
 */
void print_rev(char *s)
{
if (s != NULL)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}

for (int i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
}
