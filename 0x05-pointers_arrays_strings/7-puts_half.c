#include "main.h"

/**
 * puts_half - Print the second half of a string
 * @str: Pointer to a string
 */
void puts_half(char *str)
{
if (str != NULL)
{
int length = 0;
int start;

while (str[length] != '\0')
{
length++;
}

if (length % 2 == 0)
{
start = length / 2;
}
else
{
start = (length - 1) / 2;
}

while (str[start] != '\0')
{
_putchar(str[start]);
start++;
}

_putchar('\n');
}
}
