#include "main.h"
#include <string.h>

/**
 * _strncat - function to concatenate two string
 * @dest: destination
 * @src: source
 * @n: integer
 * Return:dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = strlen(dest);
	int a = 0;

	while (a < n && *src)
	{
		dest[index + a] = *src;
		a++;
		src++;
	}
	dest[index + a] = '\0';
	return (dest);
}
