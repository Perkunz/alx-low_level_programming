#include <stdio.h>

/**
 * main - prints number of argument
 * @argc: number of argument
 * @argv: an array of pointer to the argument
 * Return: always 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
