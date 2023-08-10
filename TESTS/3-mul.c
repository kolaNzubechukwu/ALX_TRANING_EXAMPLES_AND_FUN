#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two arguments
 * @argc:argument count
 * @argv: argument vector
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	int x, i, result = 1;
	if (argc == 1)
	{
		printf("error");
	}
	else
	{
		for (i = 2; i <= argc - 1; i++)
		{
			x = atoi(argv[i]);
			result = result * x;
		}
		printf("%i  %i\n", result, x);
	}

	return (0);
}
