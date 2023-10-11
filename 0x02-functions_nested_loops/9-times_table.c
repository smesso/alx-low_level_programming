#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int row, col, result;

for (row = 0; row <= 9; row++)
{
for (col = 0; col <= 9; col++)
{
result = row * col;

if (col != 0)
{
printf(", ");
}

if (result < 10)
{
printf("  ");
}
else
{
printf(" ");
}

printf("%d", result);
}
printf("\n");
}
}
