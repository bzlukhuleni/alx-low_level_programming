#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 *
 * @x: The base value to raise.
 * @y: The power to raise x to.
 *
 * Return: The result of the power operation, or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
