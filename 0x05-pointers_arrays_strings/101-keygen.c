#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
int sum = 0;
int random_num;
srand(time(NULL));

while (sum < 2772)
{
random_num = rand() % 78 + 48; // ASCII characters from '0' (48) to 'z' (122)
putchar(random_num);
sum += random_num;
}

if (sum != 2772)
{
putchar(2772 - sum);
}

return (0);
}
