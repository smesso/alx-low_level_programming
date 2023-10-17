#include "main.h"

/**
 * puts2 - Print every other character of a string, starting with the first
 * @str: Pointer to a string
 */
void puts2(char *str)
{
if (str != NULL)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}

_putchar('\n');
}
}
