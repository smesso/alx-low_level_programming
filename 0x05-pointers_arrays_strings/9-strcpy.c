#include "main.h"

/**
 * _strcpy - Copy a string from src to dest
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
if (dest != NULL && src != NULL)
{
char *original_dest = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';  // Null-terminate the destination string
return original_dest;
}
return NULL;
}
