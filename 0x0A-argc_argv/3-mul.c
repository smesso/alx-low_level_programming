#include <stdio.h>
#include <stdlib.h>
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted		
 *		
 * Return: the int converted from the string
 */

int main(int argc, char *argv[]) 
{
if (argc != 3) {
fprintf(stderr, "Error: Please provide exactly two arguments.\n");
return (1);
}

int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);

if (num1 == 0 && *argv[1] != '0') 
{
fprintf(stderr, "Error: Invalid input for num1.\n");
return (1);
}

if (num2 == 0 && *argv[2] != '0') 
{
fprintf(stderr, "Error: Invalid input for num2.\n");
return (1);
}

int result = num1 * num2;
printf("%d\n", result);

return (0);
}
