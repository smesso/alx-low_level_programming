#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 if successful, 
 * 1 if there are not enough arguments 
 * or invalid input.
 **/
int main(int argc, char *argv[])
{
int mult = 0;

if (argc != 3)
{
printf("Error\n");
return (1);
}

mult = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mult);

return (0);
}
