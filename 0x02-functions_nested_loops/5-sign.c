#include "main.h"

/**
 * print_sign - print sign of a number
 * @n: the number to be checked
 * Return: 1 if n > 0 and print +
 * 0 if n == 0 and print 0
 * -1 if n < 0 and print -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
