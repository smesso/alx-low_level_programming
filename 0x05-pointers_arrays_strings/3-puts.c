#include "main.h"

/**
 * _puts - Print a string followed by a new line
 * @str: Pointer to a string
 */
void _puts(char *str)
{
if (str != NULL)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
}
