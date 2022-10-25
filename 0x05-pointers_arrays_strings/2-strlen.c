#include "main.h"
#include <string.h>

/**
 * _strlen - returns length of a string
 * @s: string length
 * Return: length
 */
int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
