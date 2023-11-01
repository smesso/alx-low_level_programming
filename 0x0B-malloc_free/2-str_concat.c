#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first input string.
 * @s2: The second input string.
 *
 * Description: This function concatenates two input strings and returns
 * a pointer to the concatenated string.
 *
 * Return: (Success) a pointer to the concatenated string; (Failure) NULL.
 */
char *str_concat(char *s1, char *s2) {
int len1, len2;
char *result;

if (s1 == NULL) {
s1 = "";
}
if (s2 == NULL) {
s2 = "";
}

len1 = strlen(s1);
len2 = strlen(s2);

result = malloc(len1 + len2 + 1);
if (result == NULL) {
return (NULL);
}

strcpy(result, s1);
strcat(result, s2);

return (result);
}
