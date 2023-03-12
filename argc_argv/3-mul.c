#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - entry point
 *
 */
int main(int argc, char *argv[])
{
	int i;
	int mu = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mu *= atoi(argv[i]);
		}
		printf("%d\n", mu);
	}
	return (0);
}
