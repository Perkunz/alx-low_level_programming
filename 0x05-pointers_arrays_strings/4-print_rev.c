#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: the string to be printed in reverse
 * Return: 0
 */
void print_rev(char *s)
{
	int i;
	int length = 0;

	for (length = 0; s[length] != '\0'; length++)
	{

	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
