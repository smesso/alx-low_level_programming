#include <stdio.h>
#include <stdlib.h>		
#include "main.h"

/**
 * _strdup - Duplicates a string.
 * @str: The input string.
 *
 * Description: This function duplicates the input string and returns
 * a pointer to the duplicated string.
 *
 * Return: (Success) a pointer to the duplicated string; (Failure) NULL.
 */
char *_strdup(char *str)
{
char *dup_str;
int len = 0, i;

if (str == NULL)
return (NULL);

while (str[len] != '\0')
{
len++;
}

dup_str = (char *)malloc((len + 1) * sizeof(char));

if (dup_str == NULL)
return (NULL);

for (i = 0; i <= len; i++)
{
dup_str[i] = str[i];
}

return (dup_str);
}

