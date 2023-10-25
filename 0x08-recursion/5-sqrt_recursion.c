#include "main.h"
/**
 * _sqr_x-finds natural squareroot
 * @x:sqr
 * @y:param for sqrt
 * Return:sqrt
 */
int _sqr_x(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (_sqr_x(x, y + 1));
}
/**
 * _sqrt_recursion-finds the sqr
 * @n:param to finds its sqrt
 * Return:void
 */
int _sqrt_recursion(int n)
{
	return (_sqr_x(n, 0));
			}
