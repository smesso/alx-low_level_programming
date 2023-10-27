#include "main.h"
/**
 * is_prime_number - Checks if a given number is a prime number.
 * @n: The number to be checked for primality.
 *
 * Return: 1 if n is a prime number, 0 if it is not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_recursive(n, 2));
}

/**
 * is_prime_recursive - Helper function for recursive prime check.
 * @n: The number to be checked for primality.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if n is prime, 0 if it is not.
 */
int is_prime_recursive(int n, int divisor)
{
	if (n == divisor)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime_recursive(n, divisor + 1));
}
