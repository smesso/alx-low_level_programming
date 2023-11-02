#include "main.h"

/**
 * string_nconcat - Concatenates two strings using at most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 * Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, index;
char *concat;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[len1])
len1++;

while (s2[len2])
len2++;

if (n >= len2)
n = len2;

concat = malloc(sizeof(char) * (len1 + n + 1));

if (concat == NULL)
return (NULL);

for (index = 0; index < len1; index++)
concat[index] = s1[index];

for (index = 0; index < n; index++)
concat[len1 + index] = s2[index];

concat[len1 + n] = '\0';

return (concat);
}
