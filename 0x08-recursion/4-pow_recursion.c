#include "main.h"

/**
 * _pow_recursion - prints raise to a power
 * @x: integer 1
 * @y: integer 2
 * Return: value of x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
