#include "main.h"
#include <stdio.h>

/**
 * main - program that prints count of arguments passed
 * @argc: count of arguments
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc,char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
