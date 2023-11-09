#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int num_bytes, i;
char *main_address;

if (argc != 2)
{
printf("Usage: %s number_of_bytes\n", argv[0]);
exit(1);
}

num_bytes = atoi(argv[1]);

if (num_bytes < 0)
{
printf("Error: number_of_bytes must be a positive integer\n");
exit(2);
}

main_address = (char *)main;

for (i = 0; i < num_bytes; i++)
{
if (i == num_bytes - 1)
{
printf("%02hhx\n", main_address[i]);
break;
}
printf("%02hhx ", main_address[i]);
}
return (0);
}
