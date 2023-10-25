#include "main.h"
/**
 * is_prime_num-gets the prime number
 * @a:param to check
 * @b:param2
 * Return:int
 */
int is_prime_num(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
	return (0);
	}
	else if (a == b)
	{
	return (1);
	}
return (is_prime_num(a, b + 1));
		}
/**
 * is_prime_number-gets prime number
 * @n:input
 * Return:0
 */
is_prime_number(int n)
{
	return (is_prime_num(n, 2));
			}
