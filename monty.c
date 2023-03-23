#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/*global declarations*/
int status = 0;

/**
 * file_error - prints file error message and exits
 * @argv: given by main()
 *
 * Return: no return value
 */

void file_error(char *argv)
{
	fprintf(stderr, "Error: Can't open file %s\n", argv);
	exit(EXIT_FAILURE);
}

/**
 * error_usage - prints usage message and exits
 *
 * Return: return nothing receive nothing
 */

void error_usage(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * main - beginning of the code
 * @argv: list of arguments passed to the function
 * @argc: arguments pssed to the function
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	FILE *file;

	if (argc != 2)
		error_usage();
}
