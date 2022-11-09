#include "main.h"

/**
 * _islower - checks c for lowercase charater
 * @c: char to be checked
 * Return: 1 if the char is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

