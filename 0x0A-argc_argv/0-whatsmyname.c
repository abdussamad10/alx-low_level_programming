#include <stdio.h>
/**
 * main - function to access the name of the program
 * @argc: number of command line arguments.
 * @argv: argument contains the name of the program.
 * Return: 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
