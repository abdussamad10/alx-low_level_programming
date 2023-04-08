#include <stdio.h>
/**
 * main - print the number of argument
 * @argc: is an integer that repsent the number of argument
 * @argv: is an array of argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
