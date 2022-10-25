#include "main.h"

/**
 * rev_string - print string in reverse
 * @s: string to be reversed
 * Return: 0
 */
void rev_string(char *s)
{
	int z, j, i;
	char v1, v2;

	for (z = 0; s[z] != '\0'; z++)
	{
	}
	j = z - 1;
	i = 0;

	while (j > i)
	{
		v1 = s[i];
		v2 = s[j];
		s[i] = v2;
		s[j] = v1;
		j--;
		i++;
	}
}
