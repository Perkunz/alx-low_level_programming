#include "main.h"

/**
 * _isalpha - checks for alphabetic charcter
 * @c: if it is a letter , lowercase or uppercase
 * Return: 1 if its an alphabet otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

