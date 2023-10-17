#include "main.h"

/**
 * rev_string - Reverse a string in place
 * @s: Pointer to a string
 */
void rev_string(char *s)
{
if (s != NULL)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}

int start = 0;
int end = length - 1;
char temp;

while (start < end)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;
start++;
end--;
}
}
}
