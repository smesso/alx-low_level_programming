#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int pass[100];
int i, sum, n;

sum = 0;

srand(time(NULL));

for (i = 0; i < 100; i++)
{
pass[i] = rand() % 78 + 48;
sum += pass[i];
putchar(pass[i]);
if (sum >= 2772)
{
n = 2772 - sum + pass[i];
pass[i] = n;
putchar(n);
break;
}
}

return (0);
}
