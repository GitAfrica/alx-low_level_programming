#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line.
 * if you you rename the program, it will print the new name, without having to
 * compile it again
 * you should not remove the path before the name of the program
 * @argc: argument count
 * @argc: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
