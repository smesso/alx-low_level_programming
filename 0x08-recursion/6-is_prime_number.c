#include "main.h"
/**
 * is_prime_number - Checks if a given number is a prime number.
 * @n: The number to be checked for primality.
 *
 * Return: 1 if n is a prime number, 0 if it is not.
 */
int is_prime_number(int n)
{
	int i;

	/* If n is less than or equal to 1, it's not a prime number */
	if (n <= 1)
		return (0);

	/* Check for divisibility from 2 to n/2 */
	for (i = 2; i <= n / 2; ++i)
	{
		/* If n is divisible by i, it's not a prime number */
		if (n % i == 0)
			return (0);
	}

	/* If n is not divisible by any number in the range, it's a prime number */
	return (1);
}
