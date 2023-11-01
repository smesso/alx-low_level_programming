#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Sums up numbers passed as command-line arguments.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 if successful, 1 if there are non-integer arguments, or 0 if no arguments provided.
 **/
int main(int argc, char *argv[]) 
{
    int sum = 0;
if (argc == 1) 
{
        printf("0\n");
        return (0);
    }
    
    for (int i = 1; i < argc; i++) 
{
        char *num = argv[i];
        
        for (int j = 0; num[j] != '\0'; j++) 
	{
            if (!isdigit(num[j])) 
	    {
                printf("Error\n");
                return (1);
            }
        }
        
        sum += atoi(num);
    }
    
    printf("%d\n", sum);
    
    return (0);
}
