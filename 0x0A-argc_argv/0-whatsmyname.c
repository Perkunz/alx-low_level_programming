#include <stdio.h>

/**
 * main - prints its name on a new line
 * @argc: number of argument supplied
 * @*argv: an array of pointer to the argument
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
