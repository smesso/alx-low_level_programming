#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: (0) on success, (1) on error
 **/

int main(int argc, char *argv[])
{
int i, sum = 0;
char c[] = "Error";

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
char *find_letter = argv[i];

while (*find_letter != '\0')
{
if (*find_letter < '0' || *find_letter > '9')
{
printf("%s\n", c);
return (1);
}
find_letter++;
}

int num = atoi(argv[i]);
sum += num;
}

printf("%d\n", sum);
}
else
{
printf("%d\n", 0);
}

return (0);
}
