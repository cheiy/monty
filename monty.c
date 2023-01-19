#define _GNU_SOURCE
#include "monty.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * main - Program reads opcodes from file and performs operations.
 * @argc: Number of arguments passed to the program.
 * @argv: A pointer to array containing the arguments passed to the program.
 *
 * Description: Program reads opcodes from a file and performs the operations
 * contained inside the file.
 *
 * Return: 0 if successfully run, -1 otherwise.
 */
int main(int argc, char **argv)
{
	FILE *fp;
	int read;
	char *filename, *lineptr;
	size_t size;

	if (argc < 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	filename = argv[1];
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		printf("Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	lineptr = NULL;
	while ((read = getline(&lineptr, &size, fp)) != -1)
	{
		printf("%s\n", lineptr);
	}
	return (0);
}
