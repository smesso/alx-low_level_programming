#include "main.h"

/**
 * _sqrt_recursion - Calculates the square root of a number using recursion.
 * @n: The number for which the square root is calculated.
 *
 * Return: The integer square root of n, or -1 if n is negative.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	int start = 1, end = n, ans;

	while (start <= end)
	{
		int mid = (start + end) / 2;

		if (mid * mid == n)
			return (mid);

		if (mid * mid < n)
		{
			start = mid + 1;
			ans = mid;
		}
		else
			end = mid - 1;
	}

	return (ans);
}
